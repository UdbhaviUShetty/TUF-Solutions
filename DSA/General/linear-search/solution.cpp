class Solution {
public:
    int linearSearch(vector<int>& nums, int target) {
        for(size_t i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
                return i;
        }
        return -1;
    }
};