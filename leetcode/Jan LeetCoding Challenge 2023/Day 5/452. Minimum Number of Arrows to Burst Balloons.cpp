class Solution {
public:
    static bool cmp(const vector<int> &a, const vector<int> &b){
        return a[1] < b[1];
    }

    int findMinArrowShots(vector<vector<int>>& arr) {
        const int n = arr.size();
        if(n == 1) return 1;
        sort(arr.begin(), arr.end(), cmp);
        int res= 0;
        int curr = INT_MIN;
        for(int i=0; i < n ; i++){
            if(arr[i][0] > curr){
                curr = arr[i][1];
                res++;
            }
        }
        return res;
    }
};
