import java.io.*;
import java.util.*;
import static java.lang.Integer.*;
import static java.lang.System.out;

public class Main {
  public static void print(int[][] arr) {
    for (int i = 0; i < 10; i++) {
      for (int j = 0; j < 10; j++)
        System.out.print(arr[i][j] + " ");
      System.out.println();
    }
  }
  public static int size = 1001;
  public static int[][] arr = new int[size][size];
  public static void solve() {
    arr[1][1] = 1;
    for (int i = 2; i < size; i++) {
      arr[1][i] = arr[1][i - 1] + i - 1;
      arr[i][1] = arr[i - 1][1] + i;
    }
    for (int i = 2; i < size; i++)
      for (int j = 2; j < size; j++)
        arr[i][j] = arr[i][j - 1] + i + j - 2;

    // print(arr);

  }
  public static int solve(int x1, int y1, int x2, int y2) {
    int n = x2 + 1;
    int m = y2 + 1;
    int[][] dp = new int[n][m];
    for (int j = y1; j < m; j++)
      dp[x1][j] = arr[x1][j] + dp[x1][j - 1];

    for (int i = x1; i < n; i++)
      dp[i][y1] = arr[i][y1] + dp[i - 1][y1];

    for (int i = x1 + 1; i < n; i++) {
      for (int j = y1 + 1; j < m; j++) {
        int op1 = dp[i - 1][j];
        int op2 = dp[i][j - 1];

        dp[i][j] = arr[i][j] + Integer.max(op1, op2);
      }
    }
    return dp[x2][y2];
  }
  public static void main(String[] $__$) throws Exception {
    BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
    PrintWriter o_o = new PrintWriter(System.out);
    StringBuilder sss = new StringBuilder("");
    int t = parseInt( in .readLine().trim());
    int f = 1;
    solve();
    while (t--> 0) {
      String s = in .readLine();
      String[] str = s.split(" ");
      int x1 = parseInt(str[0]);
      int y1 = parseInt(str[1]);
      int x2 = parseInt(str[2]);
      int y2 = parseInt(str[3]);

      int ans = solve(x1, y1, x2, y2);
      sss.append(ans).append("\n");
    }
    out.print(sss); in .close();
    o_o.close();

  }
}