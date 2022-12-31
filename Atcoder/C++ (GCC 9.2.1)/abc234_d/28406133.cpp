#include<bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x...) cerr<<#x<<" = "<<x<<endl;
void usaco(string filename = ""){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    if(filename.size() > 0){
        #ifndef ONLINE_JUDGE
            freopen((filename + ".in").c_str(), "r", stdin);
            freopen((filename + ".out").c_str(), "w", stdout);
        #endif
    }
    else{
        #ifndef ONLINE_JUDGE
            freopen("input.txt", "r", stdin);
            freopen("output.txt", "w", stdout);
            freopen("error.txt", "w", stderr); 
        #endif
    }
}
int32_t main() {
    usaco();

    int n,k;
    cin >> n >> k;
    int stream[n];
    for(int i=0; i < n ;i++){
        cin >> stream[i];
    }
   priority_queue<int, vector<int>, greater<int> > pq;
   for (int i=0; i<k-1; i++)
   {
      pq.push(stream[i]);
   }
   pq.push(stream[k-1]);
   for (int i=k; i<n; i++)
   {
          cout << pq.top() << endl;
 
       if (stream[i] > pq.top())
       {
           pq.pop();
           pq.push(stream[i]);
       } 
   } 
   cout << pq.top() << endl;

    return 0;
}