class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> num;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
                {
                    num.push_back(nums[i]);
                }
        }
        for(int i=0;i<num.size();i++)
        {
            nums[i]=num[i];
        }
        for(int i=num.size();i<nums.size();i++)
        {
            nums[i]=0;
        }
    }
};