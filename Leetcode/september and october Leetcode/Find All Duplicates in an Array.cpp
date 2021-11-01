class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
       
        vector<int>v;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++)
        { 
            if(nums[i]==nums[i+1])
            {
                v.push_back(nums[i]);
            }
        
        }
        return v;
        
    }
}; TC:O(NLOGN)

//method 2
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int>m;
        vector<int>v;
        for(int i=0;i<nums.size();i++)
        {  m[nums[i]]++;
            if(m[nums[i]]>1)
            {
                v.push_back(nums[i]);
            }
        
        }
        return v;
        
    }
};//TC:O(N)