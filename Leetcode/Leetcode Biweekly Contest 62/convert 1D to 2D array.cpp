class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        int k=original.size();
        vector<vector<int>>v(m,vector<int>(n));
        int j=k;
        for(int i=0;i<m;i++)
        {
            k=k-n;
        }
      int r=0;
        if(k!=0)
        { return {};
            
        }
        for(int i=0;i<m;i++)
        {
            for(int u=0;u<n;u++)
            {
                v[i][u]=original[r];
                r++;
            }
        }
        return v;
        
    }
};