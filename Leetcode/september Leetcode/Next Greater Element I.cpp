class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        vector<int>v(n,-1);
        for(int i=0;i<nums1.size();i++)
        {
            for(int j=0;j<nums2.size();j++)
            {
                if(nums1[i]==nums2[j])
                { 
                    for(int k=j+1;k<nums2.size();k++)
                    {
                      if(nums2[j]<nums2[k]){
                            v[i]=nums2[k];
                          break;
                        }
                    }
                }
            }
        }
        return v;
        
    }
};