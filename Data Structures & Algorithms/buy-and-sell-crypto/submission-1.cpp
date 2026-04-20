class Solution {
public:
    int maxProfit(vector<int>& p) {
        int i = 0;
        int j = 0;
        int maxi = INT_MIN;
        while(j<p.size()){
            if(p[i]>p[j]){
                i = j;
            }else{
                maxi = max(maxi,(p[j]-p[i]));
            }
            ++j;
        }
        return maxi;
    }
};
