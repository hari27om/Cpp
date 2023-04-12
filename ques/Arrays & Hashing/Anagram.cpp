// https://leetcode.com/problems/valid-anagram/
// Given two strings s and t, return true if t is an anagram of s, and false otherwise.
// An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.
// Example 1:
// Input: s = "anagram", t = "nagaram"
// Output: true
// Example 2:
// Input: s = "rat", t = "car"
// Output: false


// 1.Approach
//   we use map for each strings to check and then compare both the map.
//   but before that we should check the size of the two strings, idf not same then return false.
//   t.c=O(s+t).  s.c=O(s+t).
  
//   bool isAnagram(string s, string t) {
//     if (s.size() != t.size()) {
//         return false;
//     }
    
//     unordered_map<char, int> freq;
    
//     for (char c : s) {
//         freq[c]++;
//     }
    
//     for (char c : t) {
//         freq[c]--;
//         if (freq[c] < 0) {
//             return false;
//         }
//     }
    
//     return true;
// }



// 2.Approach 
//   we sort both the string and then check if both the strings are same or not.
//   Solution 2 :
// class Solution 
// {
// 	public:
//     bool isAnagram(string s, string t) 
//     {
//         sort(s.begin(), s.end());
//         sort(t.begin(), t.end());
        
//         return s == t;
//     }
// };