#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define debug(x...) cerr<<#x<<" = "<<x<<endl;
void usaco(string filename = ""){
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
deque<int> d;
int n;
vector<int> t;
string res = "";
void f(){
    for(int i=0; i < n;i++){
        bool m1 = true;
        bool m2 = true;
 
        int mn = min(d.front(), d.back());
        int mx = max(d.front(), d.back());
 
        // mn 1st
        t.push_back(mn);
        if(is_sorted(t.begin(), t.end())){
            if(mn == d.front()){
                res += 'L';
                d.pop_front();
            }
            else{
                res += 'R';
                d.pop_back();
            }
        }
        else if(!is_sorted(t.begin(), t.end())){
            t.pop_back();
            m1 = false;
        }
 
        else{
            t.push_back(mx);
            if(is_sorted(t.begin(), t.end())){
                if(mx == d.front()){
                    res += 'L';
                    d.pop_front();
                }
                else{
                    res += 'R';
                    d.pop_back();
                }
            }
            else{
                t.pop_back();
                m2 = false;
            }
        }
    }  
}
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    usaco();
 
    cin >> n;
    int arr[n];
    for(int i=0; i < n ;i++){
        cin >> arr[i];
    }
    for(int k = 1, i = 0, j = n- 1; k <= n; k++){
        if(k == arr[i]){
            res += 'L';
            i++;
            continue;
        }
        if(k == arr[j]){
            res += 'R';
            j--;
            continue;
        }
    }
    cout << res.size() << endl;
    cout << res << endl;
 
    return 0;
}