class Solution {
public:
    vector<int> pascalTriangleII(int r) {
        long long ans=1;
        vector<int> result;
        result.push_back(1);
        for(int i=0;i<r-1;i++)
        {
            ans=ans*((r-1)-i);
            ans=ans/(i+1);
            result.push_back(ans);
        }
        return result;

    }
};