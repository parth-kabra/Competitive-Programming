#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int


const int mxn = (int)1e6;
int dp[mxn + 10], dp1[mxn + 10];
int nxt0[mxn], nxt1[mxn];
void solve()
{
    string s;
    cin >> s;
    int n = s.length();
    int last_pos = -1;
    for (int i = 0; i < n; ++i) {
        if (s[i] == '0') {
            for (int j = last_pos + 1; j <= i; ++j)
                nxt0[j] = i;
            last_pos = i;
        }
    }
    for (int i = last_pos + 1; i < n; ++i) {
        nxt0[i] = n;
    }
    if (nxt0[0] == n) {
        cout << "0\n";
        return;
    }


    last_pos = -1;
    for (int i = 0; i < n; ++i) {
        if (s[i] == '1') {
            for (int j = last_pos + 1; j <= i; ++j)
                nxt1[j] = i;
            last_pos = i;
        }
    }
    for (int i = last_pos + 1; i < n; ++i) {
        nxt1[i] = n;
    }
    dp[n] = dp[n + 1] = 0;
    dp1[n] = dp1[n + 1] = 0;
    for (int i = n - 1; i >= 0; --i) {
        dp[i] = dp[i + 1];
        if (s[i] == '0' && nxt1[i] < n)
            dp[i] = max(dp[i], dp[nxt1[i] + 1] + 1);
        if (s[i] == '1' && nxt0[i] < n)
            dp[i] = max(dp[i], dp[nxt0[i] + 1] + 1);
        dp1[i] = dp1[i + 1];
        if (nxt1[i] < n) {
            dp1[i] = max(dp1[i], dp[nxt1[i] + 1] + 1);
        }
    }
    int l = dp1[0] + 1;
    int c = nxt1[0] + 1;
    string res = "1";
    for (int i = 1; i < l; ++i) {
        if (c >= n) {
            res.push_back('0');
            continue;
        }
        if (nxt0[c] >= n) {
            res.push_back('0');
            c = nxt0[c] + 1;
            continue;
        }
        if (dp[nxt0[c] + 1] < l - i - 1) {
            res.push_back('0');
            c = nxt0[c] + 1;
        }
        else {
            res.push_back('1');
            c = nxt1[c] + 1;
        }
    }
    cout << res << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);

#endif

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}