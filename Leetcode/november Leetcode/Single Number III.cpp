class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        map<int,int>v;
        vector<int>l;
        for(int i=0;i<nums.size();i++)
        {
            v[nums[i]]++;
        }
        for(auto i : v)
        {
            if(i.second==1)
            {
                l.push_back(i.first);
            }
        }
        return l;
        
    }
};