#include <bits/stdc++.h>
using namespace std;

const int MAXN = 2e5 + 5;

int n, m, ans;
int p[MAXN], rk[MAXN];

int find(int x) {
    if (p[x] == x) return x;
    return p[x] = find(p[x]);
}

void merge(int x, int y) {
    x = find(x), y = find(y);
    if (x == y) {
        ans++;
        return;
    }
    if (rk[x] < rk[y]) swap(x, y);
    p[y] = x;
    if (rk[x] == rk[y]) rk[x]++;
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        p[i] = i;
        rk[i] = 0;
    }
    for (int i = 1; i <= m; i++) {
        int u, v;
        cin >> u >> v;
        merge(u, v);
    }
    cout << ans << endl;
    return 0;
}
