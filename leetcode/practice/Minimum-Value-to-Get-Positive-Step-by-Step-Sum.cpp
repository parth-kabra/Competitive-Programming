class Solution {
public:
    int minStartValue(vector<int>& arr) {
        const int n = arr.size();
        int sum = 0;
        int minsum = 0;
        for(int i=0; i < n;i++){
            sum += arr[i];
            minsum = min(minsum, sum);
        }
        return abs(min(minsum, 0)) + 1;
    }
};