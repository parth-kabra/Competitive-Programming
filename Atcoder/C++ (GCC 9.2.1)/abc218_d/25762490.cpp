#include<bits/stdc++.h>
using namespace std;
#define int long long
#define all(s) s.begin(),s.end()
const int imax=2147483647;
const int imin=-2147483648;
const int mod=1e9+7;
const int N=1e5+10;
const int N1=1e5+10;
bool prime[N];
int factorials[N1];

void seive(){memset(prime, true, sizeof(prime));for (int p = 2; p * p <= N; p++){if (prime[p] == true){for (int i = p * p; i <= N; i += p){prime[i] = false;}}}}
void factorial(){factorials[0]=factorials[1]=1;for(int i=2;i<N1;i++){factorials[i]=factorials[i-1]*i;}}

void count(vector<vector<int>>& points) {
        unordered_map<int, unordered_set<int>> hashmap;
        
        for(auto x: points){
            hashmap[x[0]].insert(x[1]);
        }
        int ans = 0;
        
        for(int i=0; i < points.size();i++){
            for(int j =i+1; j < points.size();j++){
                int x = points[i][0], y = points[i][1];
                int xx = points[j][0], yy = points[j][1];
                if(x!=xx and y!=yy){
            if(hashmap[x].find(yy)!=hashmap[x].end() and hashmap[xx].find(y)!=hashmap[xx].end())
                    ans++;
                }
            }
        }
        cout<<ans/2;
    }
    
void solve()
{
    int n;
    cin>>n; vector<vector<int>> points(n);
    int gh,gy;
     for(int i=0;i<n;i++)
    {
        cin>>gh>>gy;
        points[i]={gh,gy};
    }
        
 
   
    count(points);
}

int32_t main(){
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("uttar.txt", "w", stdout);
    #endif
        solve();
    return 0;
}