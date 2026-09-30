class Solution {
public:
    int sumHighestAndLowestFrequency(vector<int>& nums) {
        map<int,int> hash;
        for(int i=0;i<nums.size();i++)
        {
            hash[nums[i]]++;
        }
        int minfreq=INT_MAX,maxfreq=0;
        for(auto it:hash)
        {
            if(it.second>maxfreq)
                maxfreq=it.second;
            if(it.second<minfreq)
                minfreq=it.second;
        }

        return maxfreq+minfreq;
    }
};
