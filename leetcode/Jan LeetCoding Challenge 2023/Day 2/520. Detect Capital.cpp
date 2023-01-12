class Solution {
public:
    bool detectCapitalUse(string &s) {
        int upper = 0;
        int lower = 0;
        const int n = s.size();
        for(int i=0;i< n ;i++){
            if(isupper(s[i])){
                upper++;
            }
            else{
                lower++;
            }
        }
        if(upper == n || lower == n){
            return true;
        }
        else if(upper == 1 && lower == n - 1 && isupper(s[0])){
            return true;
        }
        return false;
    }
};
