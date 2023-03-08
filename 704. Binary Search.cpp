/*Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums. If target exists, then return its index. Otherwise, return -1.

You must write an algorithm with O(log n) runtime complexity.*/
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;int right = nums.size();
        while (left < right ) {
            int middle = (left + right) / 2;
            if (nums[middle] > target) {
                right = middle;
            } else if (nums[middle] < target) {
                left = middle + 1; 
            } else {
                return middle;
            }
        }
        return -1;
    }
};