class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        const int n = arr.size();
        sort(arr.begin(), arr.end());
        for(int i=0; i < n;i++){
            int low = 0;
            int high = n - 1;
            const int x = arr[i] * 2;
            int ind = -1;
            while(low <= high){
                const int mid = low + (high - low) / 2;
                if(arr[mid] == x){
                    ind = mid;
                    break;
                }
                else if(arr[mid] < x){
                    low = mid + 1;
                }
                else{
                    high = mid - 1;
                }
            }
            if(ind != -1 && ind != i){
                return true;
            }
        }
        return false;
    }
};