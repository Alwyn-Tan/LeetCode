#include<limits>
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
       int minLength = INT32_MAX;
       int i = 0;
       int sum = 0;
       for (int j = 0; j < nums.size(); j++)
       {
            sum = sum + nums[j];
            while (sum >= target){
                int length=j - i + 1;
                minLength = minLength < length? minLength : length;
                sum = sum - nums[i];
                i ++;
            }
       }
        return minLength == INT32_MAX? 0: minLength;
    }
};