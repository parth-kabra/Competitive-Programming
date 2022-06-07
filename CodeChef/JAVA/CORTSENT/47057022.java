/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef {
    static String check(String s) {
        int i = 0;
        while (s.charAt(i) >= 'a' && s.charAt(i) <= 'm') {
            i++;
            if (i == s.length())
                return "YES";
        }
        i = 0;
        while (s.charAt(i) >= 'N' && s.charAt(i) <= 'Z') {
            i++;
            if (i == s.length())
                return "YES";
        }
        return "NO";
    }

    static String ans(String... arr) {
        for (String i : arr) {
            if (i == "NO")
                return "NO";
        }
        return "YES";

    }

    public static void main(String[] args) throws java.lang.Exception {
        Scanner s = new Scanner(System.in);
        int t = s.nextInt();
        while (t-- > 0) {
            int x = s.nextInt();
            String ans[] = new String[x];
            for (int i = 0; i < x; i++) {
                ans[i] = check(s.next());
            }
            System.out.println(ans(ans));
        }
    }
}
