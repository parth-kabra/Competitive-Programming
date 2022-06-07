

import java.util.*;
import java.io.*;
import java.lang.*;
 class MyClass {
    static int win[][] = {{0, 1, 2},
    {3, 4, 5}, 
    {6, 7, 8}, 
    {0, 3, 6}, 
    {1, 4, 7}, 
    {2, 5, 8}, 
    {0, 4, 8}, 
    {2, 4, 6}}; 
    public static void main(String args[]) {
      FastReader sc=new FastReader();
      int t=sc.nextInt();
      while(t-->0){
          String row1=sc.nextLine();
          String row2=sc.nextLine();
          String row3=sc.nextLine();
          StringBuilder str=new StringBuilder();
          str.append(row1);
          str.append(row2);
          str.append(row3);
          String s=str.toString();
         char arr[]=s.toCharArray();
          int x=0;
          int o=0;
          int u=0;
          for(int i=0;i<str.length();i++){
              if(str.charAt(i)=='X'){
                  x++;
              }else if(str.charAt(i)=='O'){
                  o++;
              }else if(str.charAt(i)=='_'){
                  u++;
              }
          }
        
          char a[][]=new char[3][3];
          a[0][0]=row1.charAt(0);
          a[0][1]=row1.charAt(1);
          a[0][2]=row1.charAt(2);
          a[1][0]=row2.charAt(0);
          a[1][1]=row2.charAt(1);
          a[1][2]=row2.charAt(2);
          a[2][0]=row3.charAt(0);
          a[2][1]=row3.charAt(1);
          a[2][2]=row3.charAt(2);
         boolean temp=isValid(arr);
         if(temp){
             int win=solve(a);
             if(win==1 || u==0){
                 System.out.println(1);}else{
                     
                 
                     System.out.println(2);
                 }
         }else{
              
             System.out.println(3);
             
         }
      
      
    }
    }
   public static boolean isCWin(char[] board, char c) {
       
        for (int i = 0; i < 8; i++) {
            if (board[win[i][0]] == c
                    && board[win[i][1]] == c
                    && board[win[i][2]] == c) {
                return true;
            }
        }
        return false;
    }
  

   public static boolean isValid(char board[]) {
       
        int xCount = 0, oCount = 0;
        for (int i = 0; i < 9; i++) {
            if (board[i] == 'X') {
                xCount++;
            }
            if (board[i] == 'O') {
                oCount++;
            }
        }
  
       
        if (xCount == oCount || xCount == oCount + 1) {
            
            if (isCWin(board, 'O')) {
               
                if (isCWin(board, 'X')) {
                    return false;
                }
  
                return (xCount == oCount);
            }
  
            if (isCWin(board, 'X') && xCount != oCount + 1) {
                return false;
            }
  
            return true;
        }
        return false;
    }
     public static int solve(char arr[][]){
        int win=0;
        if(arr[0][0]==arr[1][1] && arr[1][1]==arr[2][2] && arr[0][0]!='_'){
            win++;
        }
        if(arr[0][2]==arr[1][1] && arr[1][1]==arr[2][0] && arr[1][1]!='_'){
            win++;
        }
        for(int i=0;i<3;i++){
             int xcount=0;
             int ocount=0;
             int ucount=0;
            for(int j=0;j<3;j++){
                if(arr[i][j]=='X'){
                    xcount++;
                }else if(arr[i][j]=='O'){
                    ocount++;
                }else if(arr[i][j]=='_'){
                    ucount++;
                }
            }
            if(xcount==3 || ocount==3){
                win++;
            }
        }
        for(int i=0;i<3;i++){
             int xcount=0;
             int ocount=0;
             int ucount=0;
            for(int j=0;j<3;j++){
                
                if(arr[j][i]=='X'){
                    xcount++;
                }else if(arr[j][i]=='O'){
                    ocount++;
                }else if(arr[j][i]=='_'){
                    ucount++;
                }
            }
            if(xcount==3 || ocount==3){
                win++;
            }
        }
       return win;
      
    }
  
    static class FastReader 
    { 
        BufferedReader br; 
        StringTokenizer st; 
  
        public FastReader() 
        { 
            br = new BufferedReader(new
                     InputStreamReader(System.in)); 
        } 
  
        String next() 
        { 
            while (st == null || !st.hasMoreElements()) 
            { 
                try
                { 
                    st = new StringTokenizer(br.readLine()); 
                } 
                catch (IOException  e) 
                { 
                    e.printStackTrace(); 
                } 
            } 
            return st.nextToken(); 
        } 
  
        int nextInt() 
        { 
            return Integer.parseInt(next()); 
        } 
  
        long nextLong() 
        { 
            return Long.parseLong(next()); 
        } 
  
        double nextDouble() 
        { 
            return Double.parseDouble(next()); 
        } 
  
        String nextLine() 
        { 
            String str = ""; 
            try
            { 
                str = br.readLine(); 
            } 
            catch (IOException e) 
            { 
                e.printStackTrace(); 
            } 
            return str; 
        } 
    }
}