class Solution {
public:
    int secondMostFrequentElement(vector<int>& nums) {
        map<int,int> hash;
        for(int i=0;i<nums.size();i++)
        {
            hash[nums[i]]++;
        }
        int maxfreq=0,secondfreq=0,max_value=-1,second_value=-1;
        for(auto it:hash)
        {
            if(maxfreq<it.second)
            {
                second_value=max_value;
                secondfreq=maxfreq;

                maxfreq=it.second;
                max_value=it.first;
            }
            else if(it.second>secondfreq && it.second!=maxfreq)
            {
                secondfreq=it.second;
                second_value=it.first;
            }
        }
        return second_value;
    
    }
};