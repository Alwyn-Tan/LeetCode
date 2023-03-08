class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int S=0; int F=0;
        for(F=0;F<nums.size();F++)
        {
            if(nums[F]!=val)
            {
                nums[S]=nums[F];
                S++;
            }
        }
        return S;
    }
};