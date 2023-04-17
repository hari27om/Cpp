// find missing no btw 1 to n 
1. Approach 
    brute force linear search  
2. Approach 
    use map to check freq of each no from 1 to n
3. Approach 
    
    // Find sum of the first n numbers.
    // Keep subtracting elements of the array
    // The sum that you are left with in the end is the missing number
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size() ;
        int sum = n * (n + 1)/2 ;
        for (int i = 0 ; i < n ; i ++)
        {
            sum = sum - nums[i] ;
        }
        return sum ;
    }
};