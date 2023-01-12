class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        map<int,int> mp;
        for(int &i : tasks){
            mp[i]++;
        }
        int res = 0;
        for(auto it : mp){
            if(it.second == 1){
                return -1;
            }
            else if(it.second == 2) res++;
            else if(it.second % 3 == 0){
                res += it.second / 3;
            }
            else{
                res += it.second / 3 + 1;
            }
        }
        return res;
    }
};
