class Solution {

public:
    int maxPoints(vector<vector<int>>& arr) {
        const int n = arr.size();   
        if(n == 1){
            return 1;
        }
        int res = 2;
        
        
        for(int  i =0; i < n ; i++){
            unordered_map<double,int> mp;
            for(int j =0; j < n; j++){
                if(i != j){
                    int x1 = arr[i][0], y1 = arr[i][1];
                    int x2 = arr[j][0], y2 = arr[j][1];
                    double slope = (double)(y2 - y1) / (double)(x2 - x1);
                    mp[slope]++;
                }
            }

            //for(auto it : mp){
            //    cout << it.first << " " << it.second << endl;
            //}

            for(auto it : mp){
                res = max(res, it.second + 1);
            }

        }
        

        return res;
    }
};
