# Problem:Maximum Number of Integers to Choose From a Range I
**Problem Link**: [LeetCode - Make String a Subsequence Using Cyclic Increments](https://leetcode.com/problems/maximum-number-of-integers-to-choose-from-a-range-i/description/?envType=daily-question&envId=2024-12-06)

---
## TOPIC:
- Greedy,unordered_set
---

## Problem Description  


You are given an integer array banned and two integers n and maxSum. You are choosing some number of integers following the below rules:

- The chosen integers have to be in the range [1, n].
- Each integer can be chosen at most once.
- The chosen integers should not be in the array banned.
- The sum of the chosen integers should not exceed maxSum.
- Return the maximum number of integers you can choose following the mentioned rules.

---

## Examples

### Example 1:
**Input:**  
`banned = [1,2,3,4,5,6,7], n = 8, maxSum = 1`  

**Output:**  
`0`  

**Explanation:**  
- You cannot choose any integer while following the mentioned conditions.  

---

### Example 2:
**Input:**  
`banned = [11], n = 7, maxSum = 50`  

**Output:**  
`7`  

**Explanation:**  
- You can choose the integers 1, 2, 3, 4, 5, 6, and 7.
- They are from the range [1, 7], all did not appear in banned, and their sum is 28, which did not exceed maxSum.

---
## Approach  

- The problem involves determining how many integers from 1 to n can be selected such that:
  1. None of the integers are in the banned list.
  2. The sum of the selected integers does not exceed maxSum.
-To solve this, we use a greedy approach:

1. Start with the smallest integer 1 and iteratively check each number up to n.
2. Skip any number that is in the banned list.
3. Add the current number to a running sum only if doing so does not exceed maxSum.
4. Stop the process as soon as adding another number would exceed maxSum.

- **Steps**:  
  1. Use an unordered_set to store the banned (unordered_set<int>st(begin(banned),end(banned));)
  2. Iterate through the numbers
  3. Update the sum and count
  4. Return the result

---

### EDGE CASE: 
- always start calculate sum from smaller number to achieve better solution
- testcase : [9,8] n =10 maxSum =20
- 1,2,3,4,5,6,7,8,9,10      (8,9 can not choose due to ban)
- start from large 10+7+6 is not less than maxSum so ans is 2
- start from smaller 1+2+3+4+5+6 exceeds but here ans is 4
- 4 is better answer
---

### Time Complexity:
- **O(n)**, where `n` is the length of `maxoperation` .

### Space Complexity:
- **O(M)**,as we are using set.

---

Happy Coding! 🚀

