class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        map<int,int> hash;
        for(int i=0;i<n;i++)
        {
            int num=nums[i];
            int more=target-num;
            if(hash.find(more)!=hash.end())
            {
                return {hash[more],i};
            }

            hash[nums[i]]=i;
        }
        
        return {-1,-1};
    }
};