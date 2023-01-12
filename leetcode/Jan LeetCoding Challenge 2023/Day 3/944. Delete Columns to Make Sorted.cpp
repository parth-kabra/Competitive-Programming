class Solution {
public:
    int minDeletionSize(vector<string>& arr) {
        const int n = arr.size();
        const int n1 = arr[0].size();
        int res = 0;
        for(int i= 0; i < n1; i ++){
            vector<char> check;
            for(int j =0; j < n ; j++){
                check.push_back(arr[j][i]);
            }
            if(!is_sorted(check.begin(), check.end())){
                res++;
            }
        }
        return res;
    }
};
