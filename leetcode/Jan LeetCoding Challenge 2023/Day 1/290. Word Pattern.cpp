class Solution {
public:
    bool wordPattern(string pattern, string s) {
        stringstream arr(s);
        map<char, string> mp1;
        map<string, char> mp2;
        string a;
        int i =0;
        while(arr >> a){
            if(!mp1[pattern[i]].empty()){
                if(mp1[pattern[i]] != a){
                    return false;
                }
            }
            if(mp2.find(a) != mp2.end()){
                if(mp2[a] != pattern[i]){
                    return false;
                }
            }
            mp1[pattern[i]] = a;
            mp2[a] = pattern[i++];
        }
        return i == pattern.size();
    }
};
