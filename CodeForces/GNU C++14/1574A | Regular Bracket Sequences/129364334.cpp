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
void seive(){memset(prime,true,sizeof(prime));for(int p=2;p*p<=N;p++){if (prime[p] == true){for(int j=p*p;j<=N;j+=p){prime[j]=false;}}}}
void factorial(){factorials[0]=factorials[1]=1;for(int i=2;i<N1;i++){factorials[i]=factorials[i-1]*i;}}
bool areBracketsBalanced(string expr)
{ 
    stack<char> s;
    char x;
 
    // Traversing the Expression
    for (int i = 0; i < expr.length(); i++)
    {
        if (expr[i] == '(' || expr[i] == '['
            || expr[i] == '{')
        {
            // Push the element in the stack
            s.push(expr[i]);
            continue;
        }
 
        // IF current current character is not opening
        // bracket, then it must be closing. So stack
        // cannot be empty at this point.
        if (s.empty())
            return false;
 
        switch (expr[i]) {
        case ')':
             
            // Store the top element in a
            x = s.top();
            s.pop();
            if (x == '{' || x == '[')
                return false;
            break;
 
        case '}':
 
            // Store the top element in b
            x = s.top();
            s.pop();
            if (x == '(' || x == '[')
                return false;
            break;
 
        case ']':
 
            // Store the top element in c
            x = s.top();
            s.pop();
            if (x == '(' || x == '{')
                return false;
            break;
        }
    }
 
    // Check Empty Stack
    return (s.empty());
}
int sum=0;
void def(int n,int open,int close,string s){
    if (open==n and close==n){sum++;cout<<s<<endl;return;}
    if(sum >= n) return;
    if(open < n) def(n,open+1,close,s+"(");
    if(close <open) def(n,open,close+1,s+")");
    if(sum >=n)return;
}
void solve()
{
    int n;
    cin>>n;
    sum=0;
    def(n,0,0,"");
}
 
int32_t main(){
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("uttar.txt", "w", stdout);
    #endif
        int t;
        cin>>t;
        while(t--){
            solve();
        }
    return 0;
}