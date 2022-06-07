#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll findsum(vector<vector<ll>>&dp,ll k, ll p){
ll ss=0,count=0;
for(ll i=k-1;i<dp.size();i++){
  for(ll j=k-1;j<dp[0].size();j++){
    if(i==k-1 || j==k-1){
      if(i==k-1 && j==k-1)
      ss = dp[i][j];
      else if(i==k-1)
      ss=dp[i][j]-dp[i][j-k];
      else
      ss = dp[i][j]-dp[i-k][j];
    }
    else
    ss = dp[i][j]-dp[i-k][j]-dp[i][j-k]+dp[i-k][j-k];
    if(ss>=p)
    count++;
  }
}
return count;
}

int main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  ll t;
  cin>>t;
  while(t--){
  ll n,m,k;
  cin>>n>>m>>k;
  vector<vector<ll>>mat(n,vector<ll>(m,0));
  vector<vector<ll>>dp(n,vector<ll>(m,0));
  for(ll i =0;i<n;i++)
  for(ll j=0;j<m;j++)
  cin>>mat[i][j];
  for(ll i=0;i<mat.size();i++)
  for(ll j =0;j<mat[0].size();j++){
    if(i==0 && j==0)
    dp[i][j]=mat[i][j];
    else if(i==0)
    dp[i][j]=mat[i][j]+dp[i][j-1];
    else if(j==0)
    dp[i][j]=mat[i][j]+dp[i-1][j];
    else
    dp[i][j]=mat[i][j]+dp[i][j-1]+dp[i-1][j]-dp[i-1][j-1];
  }
ll count=0;
ll val=1;
for(ll i =1;i<=n && i<=m;i++){
val=k*i*i;
  count=count+findsum(dp,i,val);
}
cout<<count<<endl;
}
return 0;
}