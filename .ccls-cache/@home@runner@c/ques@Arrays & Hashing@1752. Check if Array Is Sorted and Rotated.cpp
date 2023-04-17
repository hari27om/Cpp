https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/


class Solution {
public:
    bool check(vector<int>& nums) {
               int count = 0;
        int n = nums.size();
        for(int i=1;i<n;i++){
            if(nums[i-1] > nums[i]){
                count++;
            }
        }
        if(nums[n-1]>nums[0]){// n-1 aur 0 element bhi dekhna hai.
            count++;
        }
        return count<=1;
    }
};



//we have to check no of pairs in the array where every last element is smaller than next elemnt except  only one pair.