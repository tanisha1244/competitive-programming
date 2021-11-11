class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int minValue = 0;
    int sum = 0;
    for (auto n : nums) {
        sum += n;
        minValue = min(minValue, sum);
    }
 
    int startValue = 1 - minValue;
    return startValue;
        
    }
};