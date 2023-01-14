class Solution {
public:
    map<char, char> mp;
    
    char par(char x){
        if(mp[x] == x){
            return x;
        }
        return mp[x] = par(mp[x]);
    }
    
    void join(char a, char b){
        a = par(a);
        b = par(b);
        if(a == b){
            return;
        }
        if(a < b){
            swap(a, b);
        }
        mp[a] = b;
    }
    
    string smallestEquivalentString(string s1, string s2, string baseStr) {
        for(char i = 'a'; i <= 'z'; i++){
            mp[i] = i;
        }
        const int n = s1.size();
        for(int i =0; i < n;i++){
            join(s1[i], s2[i]);
        }
        string res = "";
        for(char i : baseStr){
            res += par(i);
        }
        return res;
    }
};
