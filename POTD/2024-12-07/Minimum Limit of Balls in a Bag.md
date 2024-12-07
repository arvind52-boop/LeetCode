# Problem: Minimum Limit of Balls in a Bag
**Problem Link**: [LeetCode - Minimum Limit of Balls in a Bag](https://leetcode.com/problems/minimum-limit-of-balls-in-a-bag/?envType=daily-question&envId=2024-12-07)

---

## Problem Description  

You are given an integer array nums where the ith bag contains nums[i] balls. You are also given an integer maxOperations.

You can perform the following operation at most maxOperations times:

Take any bag of balls and divide it into two new bags with a positive number of balls.
For example, a bag of 5 balls can become two new bags of 1 and 4 balls, or two new bags of 2 and 3 balls.
Your penalty is the maximum number of balls in a bag. You want to minimize your penalty after the operations.

Return the minimum possible penalty after performing the operations.
---

## Examples

### Example 1:
**Input:**  
`nums = [9], maxOperations = 2`  

**Output:**  
`3`  

**Explanation:**  
- Divide the bag with 9 balls into two bags of sizes 6 and 3. [9] -> [6,3].
- Divide the bag with 6 balls into two bags of sizes 3 and 3. [6,3] -> [3,3,3].
The bag with the most number of balls has 3 balls, so your penalty is 3 and you should return 3.
---

### Example 3:
**Input:**  
`str1 = "ab"`  
`str2 = "d"`  

**Output:**  
`false`  

**Explanation:**  
It is impossible to make `str2` a subsequence of `str1` using the operation at most once.  

---

## Approach  

- 

- **Steps**:  
  1. 
---

### EDGE CASE: 
Handle the case where `str1[i]` is `'z'` and needs to wrap around to `'a'`. This is done by checking if `str1[i] - 25 == str2[j]`.

---

### Time Complexity:
- **O(n + m)**, where `n` is the length of `str1` and `m` is the length of `str2`.

### Space Complexity:
- **O(1)**, as we are only using a constant amount of extra space.

---

Happy Coding! 🚀



