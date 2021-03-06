#include<bits/stdc++.h>
using namespace std;
 
 
 
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template<typename T> using Set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template<typename T> using Multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
 
 
 
#define endl '\n'
#define int long long
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
bool f(string &s){
    stack<char> st;
    char x;
    for(int i=0; i < s.size(); i++){
        if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
            st.push(s[i]);
            continue;
        }
        if(st.empty()){
            
            return false;
        }
        switch(s[i]){
            case ')':
                x = st.top();
                st.pop();
                if(x == '{' || x == '['){
                    return false;
                }
                break;
            case '}':
                x = st.top();
                st.pop();
                if(x == '(' || x == '['){
                    return false;
                }
                break;
            case ']':
                x = st.top();
                st.pop();
                if(x == '(' || x == '{'){
                    return false;
                } 
        }
    }
    return (st.empty());
}
void Solve(){
    deque<int> q;
    int n;
    cin >> n;
    while(n--){
        int x;
        cin >> x;
        q.push_back(x);
    }
    while(!q.empty() && q.front()){
        q.pop_front();
    }
    while(!q.empty() && q.back()){
        q.pop_back();
    }
    if(q.empty()){
        cout << 0 << endl;
    }
    else{
        cout << q.size() + 1 << endl;
    }
}
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    usaco();
 
    int T = 1;
    cin >> T;
    while(T--){
        Solve();
    }
    return 0;
 
}