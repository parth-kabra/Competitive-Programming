class Solution {
public:
    int maxIceCream(vector<int>& arr, int k) {
        sort(arr.begin(), arr.end());
        const int n = arr.size();
        int res = 0;
        int i =0;
        while(i < n && k - arr[i] >= 0){
            res++;
            k -= arr[i];
            i++;
        }
        return res;
    }
};
