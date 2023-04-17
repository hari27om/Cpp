// // https://leetcode.com/problems/rotate-array/

//     First, we will perform (d%n) to get the effective number of rotations.
//     We will store the last d elements(from index n-d to n-1) in a temporary array using a loop. The loop will run from index n-d to n-1(0-based indexing). Inside the loop, we will do this: temp[i-(n-d)] = arr[i] (For example, the (n-d)th element of the array will go to the 0th index in the temporary array). 
//     We will shift the first (n-d) elements by d places to the right using a loop(say i) that will start from the index (n-d-1) and run back up to index 0 (in case of 0-based indexing). Inside the loop, the shifting will be like: arr[i+d] = arr[i].
//     Unlike left rotation, here the loop will run backward shifting the (n-d)th element first and the 0th element last.
//     After that, we will place the elements of the temporary array in the first d places of the given array using another loop that starts from 0 and runs up to d-1 (0-based index). So, to place the elements in the correct position, inside the loop, we will do this: arr[i] = temp[i].

// // class Solution {
// // public:
// //     void rotate(vector<int>& nums, int k) {
// //           int n= nums.size();
// //         vector<int> ans(n);
      
// //         for(int i=0; i<n; i++)
// //         ans[(i+k)%n] = nums[i];
// //         nums=ans;
// //     }
// // };


//     Step 1: Reverse the subarray with the last d elements (reverse(arr+n-d, arr+n)).
//     Step 2: Reverse the subarray with the first (n-d) elements (reverse(arr, arr+n-d)).
//     Step 3: Finally reverse the whole array (reverse(arr, arr+n)).