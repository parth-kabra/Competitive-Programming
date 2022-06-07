#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define fo(i, n) for (int i = 0; i < n; i++)
#define fo1(i, n) for (int i = 1; i <= n; i++)
#define w(n) while (n--)
#define scl(n) scanf("%lld", &n)
#define scf(n) scanf("%lf", &n)
#define pfl(x) printf("%lld\n", x)
#define ps printf(" ")
#define INF 1000000000000
#define newLine cout << "\n"
#define pb push_back
#define all1(x) (x).begin(), (x).end()
#define all(arr) (arr, arr + n)
#define MAX 1000000007
#define ll long long int
int vis[50000] = {0};
ll n, x, y, d;

void solve()
{
    ll n;
    cin >> n;

    if (n < 40)
    {
        cout << 40 - n;
    }
    else if (n < 70)
    {
        cout << 70 - n;
    }
    else if (n < 90)
    {
        cout << 90 - n;
    }
    else
    {
        cout << "expert";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t{1};
    // cin >> t;
    w(t)
    {
        solve();
        // newLine;
    }
}