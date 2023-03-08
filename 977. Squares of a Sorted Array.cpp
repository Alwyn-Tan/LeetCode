class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int k = nums.size() - 1;
        int i = 0;int j = 0;
        for(i = 0, j = 0; i <= j;){       
            if(nums[i] * nums[i] > nums[j] * nums[j]){
                nums[k] = nums[i] * nums[i];
                k--;
                i++;
            }
            else{
                nums[k] = nums[j] * nums[j];
                k--;
                j--;
            }
        }
        return nums;
    }
};