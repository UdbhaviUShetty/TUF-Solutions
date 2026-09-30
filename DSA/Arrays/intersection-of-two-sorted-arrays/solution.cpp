class Solution {
public:
    vector<int> intersectionArray(vector<int>& nums1, vector<int>& nums2) {

        int n1=nums1.size(),n2=nums2.size();
        int i=0,j=0;
        vector<int> intersectionArray;
        while(i<n1 && j<n2)
        {
            if(nums1[i]<nums2[j])
            {
                i++;
            }
            else if(nums2[j]<nums1[i])
            {
                j++;
            }
            else
            {
                intersectionArray.push_back(nums1[i]);
                i++;
                j++;
            }
           
        }
        return intersectionArray;
        
    }
};