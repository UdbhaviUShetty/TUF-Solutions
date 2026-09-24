class Solution {
public:
    int largestElement(vector<int>& nums) {
        int largest=-9999999;
        for(size_t i=0;i<nums.size();i++)
        {
            if(nums[i]>largest)
                largest=nums[i];
        }
        return largest;

    }
};