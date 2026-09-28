class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
     int largest=nums[0],slargest=INT_MIN;
     if(nums.size()<2)
     {
        return -1;
     }
     for(size_t i=1;i<nums.size();i++)
     {
        if(nums[i]>largest)
        {
            slargest=largest;
            largest=nums[i];
        }
        else
        {
            if(nums[i]<largest && nums[i]>slargest)
            {
                slargest=nums[i];
            }
        }
        

     }
     if(slargest==INT_MIN)
        return -1;
     else
        return slargest;
    }
};