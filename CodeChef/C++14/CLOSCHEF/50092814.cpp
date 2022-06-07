#include<bits/stdc++.h>
using namespace std;
#define int long long
const int imax=(1LL<<31)-1;
const int imin=-2147483648;
const int mod=1e9+7;
const int N=1e5+10;
pair<int, int> getMaxandMinProduct(int arr[], int n)
{
    // Initialize all products with arr[0]
    int curMaxProduct = arr[0];
    int curMinProduct = arr[0];
    int prevMaxProduct = arr[0];
    int prevMinProduct = arr[0];
    int maxProduct = arr[0];
    int minProduct = arr[0];
 
    // Process all elements after arr[0]
    for (int i = 1; i < n; ++i)
    {
        /* Current maximum product is maximum of following
            1) prevMax * curelement (when curelement is +ve)
            2) prevMin * curelement (when curelement is -ve)
            3) Element itself
            4) Previous max product */
        curMaxProduct = max(prevMaxProduct * arr[i],
                            max(prevMinProduct * arr[i],
                                arr[i]));
        curMaxProduct = max(curMaxProduct, prevMaxProduct);
 
        /* Current min product computation is Similar to
           that of current max profuct     */
        curMinProduct = min(prevMaxProduct * arr[i],
                            min(prevMinProduct * arr[i],
                                arr[i]));
        curMinProduct = min(curMinProduct, prevMinProduct);
        maxProduct = max(maxProduct, curMaxProduct);
        minProduct = min(minProduct, curMinProduct);
 
        // copy current values to previous values
        prevMaxProduct = curMaxProduct;
        prevMinProduct = curMinProduct;
    }
 
    return make_pair(minProduct, maxProduct);
}
void solve(){
    int n;
    cin>>n;
    int  arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int  x=arr[n-1];
    int  y=arr[0];
    pair<int, int> product = getMaxandMinProduct(arr, n);
    int m=product.first;
    int mn=product.second;
    if(m<y || mn>x){
        cout<<0<<endl;
    }else{
        cout<<1<<endl;
    }
}
int32_t main(){
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("op.txt", "w", stdout);
    #endif
        int t;
        cin>>t;
        while(t--){
            solve();
        }
    return 0;
}