class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        vector<bool>dp(n,false);
        dp[n-1]=true;
        for(int i=n-2;i>=0;i--)
        {
            int k=0;
            while(k<=nums[i])
            {
                if(dp[i+k]==true)
                {
                    dp[i]=true;
                    break;
                }
                k++;
            }
        }
        return dp[0];
    }
};