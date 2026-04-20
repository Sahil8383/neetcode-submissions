class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int t) {
        int i = 0,j = nums.size() - 1;
        while(i<j){
            if((nums[i]+nums[j])>t){
                j--;
            }else if((nums[i]+nums[j])<t){
                i++;
            }else{
                return {i+1,j+1};
            }
        }
        return {i+1,j+1};
    }
};
