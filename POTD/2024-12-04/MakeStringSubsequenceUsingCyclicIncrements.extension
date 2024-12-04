# Problem: Make String a Subsequence Using Cyclic Increments
**Problem Link**: [LeetCode - Make String a Subsequence Using Cyclic Increments](https://leetcode.com/problems/make-string-a-subsequence-using-cyclic-increments/description/?envType=daily-question&envId=2024-12-04)

---

## Problem Description  

You are given two 0-indexed strings `str1` and `str2`.  

In an operation, you select a set of indices in `str1`, and for each index `i` in the set, increment `str1[i]` to the next character cyclically.  
- `'a'` becomes `'b'`,  
- `'b'` becomes `'c'`, ...,  
- `'z'` becomes `'a'`.

Return **true** if it is possible to make `str2` a subsequence of `str1` by performing the operation at most once, and **false** otherwise.

---

## Examples

### Example 1:
**Input:**  
`str1 = "abc"`  
`str2 = "ad"`  

**Output:**  
`true`  

**Explanation:**  
- Select index `2` in `str1`.  
- Increment `str1[2]` to become `'d'`.  
- Hence, `str1` becomes `"abd"` and `str2` is now a subsequence.  

---

### Example 2:
**Input:**  
`str1 = "zc"`  
`str2 = "ad"`  

**Output:**  
`true`  

**Explanation:**  
- Select index `0` and `1` in `str1`.  
- Increment `str1[0]` to become `'a'` and `str1[1]` to become `'d'`.  
- Hence, `str1` becomes `"ad"` and `str2` is now a subsequence.  

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

- **Two Pointers (i, j)**: Traverse both `str1` and `str2` simultaneously using two pointers `i` and `j`.  
- **Increment Operation**: For each character in `str1`, perform an operation at most once. The characters can either:
  - Stay the same (`str1[i] == str2[j]`).
  - Increment by 1 (`str1[i] + 1 == str2[j]`).
  - Wrap around from `'z'` to `'a'` (`str1[i] - 25 == str2[j]`).

- **Steps**:  
  1. Initialize `i` and `j` to 0.
  2. Traverse `str1` and `str2` using the two pointers.
  3. Check if the current character from `str1` can be transformed to the current character from `str2` by the operation.
  4. If they match, increment `j` (move to the next character in `str2`).
  5. Regardless of whether a match is found, increment `i` (move to the next character in `str1`).
  6. Continue until either `j` reaches the length of `str2` or `i` reaches the length of `str1`.
  7. If `j == str2.length()`, return `true` (i.e., `str2` is a subsequence of `str1`).
  8. If the loop ends without finding a match for all characters in `str2`, return `false`.

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
