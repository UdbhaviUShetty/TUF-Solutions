class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size(),n2=nums2.size();
        for(int i=0;i<n2;i++)
        {
            
            nums1.push_back(nums2[i]);
            
        }
        sort(nums1.begin(),nums1.end());

        nums1.erase(unique(nums1.begin(),nums1.end()),nums1.end());
        
        return nums1;
        
    }
};