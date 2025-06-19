class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int result=1;
        int min_val=nums[0];
        for(int num:nums)
        {
            if(num-min_val>k)
            {
                result++;
                min_val=num;
            }
        }
        return result;
    }
};