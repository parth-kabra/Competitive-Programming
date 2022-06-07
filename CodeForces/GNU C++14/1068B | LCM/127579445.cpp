#include<bits/stdc++.h>
using namespace std;
#define int long long
#define all(s) s.begin(),s.end()
int printDivisors(int n)
{
    int url=0;
    for (int i=1; i<=sqrt(n); i++)
    {
        if (n%i == 0)
        {
            // If divisors are equal, print only one
            if (n/i == i){
                //cout <<" "<< i;
                //url.push_back(i);
                url++;
            }
 
            else{ // Otherwise print both
                //cout << " "<< i << " " << n/i;
                //url.push_back(i);
                //url.push_back(n/i);
                url+=2;
            }
        }
    }
    return url;
}
void solve(){
    int n;
    cin>>n;
    //vector<int> url = printDivisors(n);
    /*for(int &i : url){
        cout<<i<<" ";
    }
    cout<<endl;*/
    cout<<printDivisors(n)<<endl;
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