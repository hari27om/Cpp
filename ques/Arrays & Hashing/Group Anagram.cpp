https://leetcode.com/problems/group-anagrams/

1. Approach 
   we can say that two word are anagram as if we sort both the string then both the string will be same;("adc" , "dac" if we sort both then they       will be "acd".)
    tc=O(m.nlogn)  {m element * nlogn for sorting.}

  
2. Approach 
    we will use a count func to calculate the no of apphabet in each word and it freq and sort it in hashmAP 
    for ex:-"tan" & "ant" both have 1t, 1n, 1a;
    so for each key we can get multiple value.
    tc=O(m.n*26 n is length of word )    tc=O(m.n)

      
    