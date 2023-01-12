class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totgas = accumulate(gas.begin(), gas.end(), 0LL);
        int totcost = accumulate(cost.begin(), cost.end(), 0LL);
        if(totgas < totcost) return -1;
        
        int sum = 0;
        const int n = gas.size();
        int res = -1;
        for(int i =0; i < n; i++){
            sum += gas[i] - cost[i];
            if(sum < 0){
                sum = 0;
                res = i + 1;
            }
        }
            
        if(gas[0] - cost[0] >= 0 && res == -1){
            res = 0;
        }
        
        return res;
    }
};
