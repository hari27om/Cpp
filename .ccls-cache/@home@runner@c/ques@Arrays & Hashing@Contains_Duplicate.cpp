//https://leetcode.com/problems/contains-duplicate/

// 1.Approach
//   Search for each element using brute force.
//   t.c.= O(n*n).    s.c.=O(1). 

// 2.Approach
//   First sort the elements and then check neighbours.
//   t.c.=O(nlogn)+O(n).   s.c.=O(1).

// class Solution {
// public:
//     bool containsDuplicate(vector<int>& nums) {
//         sort(nums.begin(), nums.end());
//         for(int i =0;i<nums.size()-1;i++){
//                 if(nums[i] == nums[i+1]) 
//                 return true;
//         }
//         return false;
//     }
// };

// 3.Approach
//   we will create a hashset(unordered_set) to increase the time complexicity but extra space is created.
//   we check each element in the hashset for if it is already present.
//   t.c.=O(n)   s.c.=(n).
// https://www.programiz.com/cpp-programming/unordered-set


// class Solution {
// public:
//     bool containsDuplicate(vector<int>& nums) {
//         set<int>s;
//         for(int n:nums) {
//             if(s.count(n)) return true;
//             else s.insert(n);
//         }
//         return false;
//     }
// };