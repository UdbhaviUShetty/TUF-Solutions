class Solution {
public:

    vector<int> Row(int row)
    {
        long long ans=1;
        vector<int> result;
        result.push_back(1);
        for(int i=0;i<row-1;i++)
        {
            ans=ans*((row-1)-i);
            ans=ans/(i+1);
            result.push_back(ans);
        }
        return result;
    }

    vector<vector<int>> pascalTriangleIII(int n) {

        vector<vector<int>> ans;
        for(int i=1;i<=n;i++)
        {
            ans.push_back(Row(i));
        }
        return ans;

    }
};