# Problem: Take Gifts From the Richest Pile
**Problem Link**: [LeetCode - Take Gifts From the Richest Pile](https://leetcode.com/problems/take-gifts-from-the-richest-pile/description/?envType=daily-question&envId=2024-12-12)

---

## Problem Description  

You are given an integer array gifts denoting the number of gifts in various piles. Every second, you do the following:

- Choose the pile with the maximum number of gifts.
- If there is more than one pile with the maximum number of gifts, choose any.
- Leave behind the floor of the square root of the number of gifts in the pile. Take the rest of the gifts.
  Return the number of gifts remaining after k seconds.
---

## Examples

### Example 1:
**Input:**  
`gifts = [25,64,9,4,100]`  
`k = 4`  

**Output:**  
`29`  

**Explanation:**  
- The gifts are taken in the following way:
- In the first second, the last pile is chosen and 10 gifts are left behind.
- Then the second pile is chosen and 8 gifts are left behind.
- After that the first pile is chosen and 5 gifts are left behind.
- Finally, the last pile is chosen again and 3 gifts are left behind.
The final remaining gifts are [5,8,9,4,3], so the total number of gifts remaining is 29.
---

## Approach  

- The problem requires us to simulate a process where, in each second, we repeatedly choose the pile with the maximum number of gifts, take all except the square root of that number, and then repeat this operation k times. The goal is to determine the total number of gifts remaining after k seconds.

This is implemented efficiently using a max-heap (priority queue), which allows us to retrieve and modify the maximum element in logarithmic time.

- **Steps**:  
  1. Convert the input array gifts into a max-heap.
  2. Perform Operations for k Seconds
  3. Calculate the Total Remaining Gifts.
  4. Return result.

### EDGE CASE: 
If all piles have 1 gift, the operation will not change the piles, and the sum will remain unchanged.

---

### Time Complexity:
- **O(n + 2KlogN)**, .

### Space Complexity:
- **O(1)**, as we are only using a constant amount of extra space.

---

Happy Coding! 🚀



