class Solution {
public:
    int mine=INT_MAX;
    void findminelement(vector<int>& nums,int s,int e)
    {  if(s>e)
        {
        return;
         }
        if(s<=e)
        {
            int mid=(s+e)/2;
            if(mine>nums[mid])
            {
                mine=nums[mid];
            }
            findminelement(nums,s,mid-1);
            findminelement(nums,mid+1,e);
        }
    }
    int findMin(vector<int>& nums) {
        int e=nums.size()-1;
        int s=0;
        findminelement(nums,s,e);
        return mine;
    }
};