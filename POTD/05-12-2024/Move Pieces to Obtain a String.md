# Problem: Move Pieces to Obtain a String
**Problem Link**: [LeetCode - Move Pieces to Obtain a String](https://leetcode.com/problems/move-pieces-to-obtain-a-string/description/?envType=daily-question&envId=2024-12-05)

---
## Topic 
-Two Pointer 
- string
## Approach  


## Problem Description  

You are given two strings start and target, both of length n. Each string consists only of the characters 'L', 'R', and '_' where:

- The characters 'L' and 'R' represent pieces, where a piece 'L' can move to the left only if there is a blank space directly to its left, and a piece 'R' can move to the right only if there is a blank space directly to its right.
- The character '_' represents a blank space that can be occupied by any of the 'L' or 'R' pieces.
Return true if it is possible to obtain the string target by moving the pieces of the string start any number of times. Otherwise, return false.

---

## Examples

### Example 1:
**Input:**  
`start = "_L__R__R_"`  
`target = "L______RR"`  

**Output:**  
`true`  
**Explanation:**  
- We can obtain the string target from start by doing the following moves:
- Move the first piece one step to the left, start becomes equal to "L___R__R_".
- Move the last piece one step to the right, start becomes equal to "L___R___R".
- Move the second piece three steps to the right, start becomes equal to "L______RR".
Since it is possible to get the string target from start, we return true.

---
## Bruteforce Approach
- Try all possible swaps of 'L' and 'R' characters in the start string and check if it can be transformed into the target string.
- 1. Recursive Exploration
  2. If no valid transformation is found after trying all swaps, the function stores false in the memoization map for that configuration of start and returns false
---
## why bruteforce fails 
- 1. The brute force approach explores all possible configurations of the start string by trying every swap of 'L' and 'R' with adjacent underscores. Since each swap can lead to further swaps, the number of recursive calls grows exponentially. This can result in a significant number of recursive calls, especially for larger strings, leading to poor performance
  2. The recursive tree might explore many redundant configurations (which are essentially equivalent to previously explored states), even though we are using memoization. The number of calls could still be very large because of the multiple recursive paths taken for each configuration.
  ---
  ## Optimal Solution
  ---

## Approach
1. Two-pointer technique
2. Valid character movement checks

---
## Steps  

- The approach used in this code is a two-pointer technique where we compare characters from start and target while skipping over underscores ('_'). The goal is to check if it's possible to transform start into target while respecting the movement rules of 'L' and 'R'.
- Initialize pointers: i and j are initialized to 0
  - Out-of-bounds check i == n or j == n
 - ## Character comparison:

- If the characters start[i] and target[j] are not equal, the function returns false because the characters cannot be rearranged to match each other.
- If the characters are equal, further checks are done:
- If the character is 'L' and i < j, it means 'L' is trying to move to the right, which violates the rule that 'L' can only move to the left. In this case, return false.
- If the character is 'R' and i > j, it means 'R' is trying to move to the left, which violates the rule that 'R' can only move to the right. In this case, return false.
- Increment pointers: i++ ,j++
- return true

-

### EDGE CASE: 
Handle the case where `start` is `'_R'` and `target`is `'R_`.

---

### Time Complexity:
- **O(n)**, where `n` is the length of both string start and target.

### Space Complexity:
- **O(1)**, as we are only using a constant amount of extra space.

---

Happy Coding! 🚀
