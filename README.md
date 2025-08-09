# 🔍 Binary Search Problems – C++ (LeetCode Practice)

This repository contains my **C++ solutions** to multiple **Binary Search-based problems** from [LeetCode](https://leetcode.com/), covering the basics, standard variations, and tricky interview-style challenges.

Each solution includes:
- Clean, well-commented C++ code
- Time & Space complexity analysis
- Algorithmic explanation

---

## 📚 Table of Contents

| S.No | Problem | Description | Approach | Time Complexity | Space Complexity | Algorithm Used |
|------|---------|-------------|----------|-----------------|------------------|----------------|
| 1 | [Introduction to Binary Search](codes/introduction.cpp) | Search for a target in a sorted array by repeatedly halving the search range. | Iterative | O(log n) | O(1) | Binary Search |
| 2 | [Binary Search (Recursive)](codes/recursivecode.cpp) | Standard binary search implemented using recursion. | Recursive | O(log n) | O(log n) | Binary Search (Recursion) |
| 3 | [Lower Bound](codes/lowerbound.cpp) | Find the first index where a given value could be inserted without violating the order. | Iterative | O(log n) | O(1) | Modified Binary Search |
| 4 | [Upper Bound](codes/upperbound.cpp) | Find the first index where a value greater than the target appears. | Iterative | O(log n) | O(1) | Modified Binary Search |
| 5 | [Search Insert Position](codes/searchinsertionposition.cpp) | Return index of the target if found, else where it should be inserted in order. | Iterative | O(log n) | O(1) | Binary Search |
| 6 | [Floor & Ceil in Sorted Array](codes/floorandceil.cpp) | Find floor (largest ≤ target) and ceil (smallest ≥ target) in a sorted array. | Iterative | O(log n) | O(1) | Binary Search |
| 7 | [First & Last Occurrence (Linear Search)](codes/firstandlastoccuringindexlinearsearch.cpp) | Find first and last positions of a target using a simple scan. | Linear | O(n) | O(1) | Linear Search |
| 8 | [First & Last Occurrence (LB/UB)](codes/firstandlastoccuringindexlbup.cpp) | Find first and last positions using lower bound and upper bound. | Iterative | O(log n) | O(1) | Lower & Upper Bound |
| 9 | [Search in Rotated Sorted Array I](codes/searchelementinsortedrotatedarrayI.cpp) | Search for a target in a rotated sorted array without duplicates. | Iterative | O(log n) | O(1) | Modified Binary Search |
| 10 | [Search in Rotated Sorted Array II](codes/searchelementinsortedrotatedarrayII.cpp) | Search for a target in a rotated sorted array with duplicates. | Iterative | O(log n) | O(1) | Modified Binary Search |
| 11 | [Minimum in Rotated Sorted Array](codes/minimuminarepeatedsortedarray.cpp) | Find the smallest element in a rotated sorted array. | Iterative | O(log n) | O(1) | Binary Search |
| 12 | [Count Rotations in Sorted Array](codes/howmanyarrayisrotated.cpp) | Determine how many times a sorted array has been rotated. | Iterative | O(log n) | O(1) | Binary Search |
| 13 | [Single Element in Sorted Array (Linear Search)](codes/singleelementinasortedarraybruteforce.cpp) | Find the unique element where every other element appears twice. | Linear | O(n) | O(1) | Linear Scan |
| 14 | [Single Element in Sorted Array (Binary Search)](codes/singleelementinasortedarraybinarysearch.cpp) | Optimized way to find the unique element using binary search properties. | Iterative | O(log n) | O(1) | Binary Search |

---

## 🧠 Problem Explanations

### 1. Introduction to Binary Search
Basic iterative implementation: start with `low = 0` and `high = n - 1`, repeatedly check the middle element and narrow down the range.

### 2. Recursive Binary Search
Same as the iterative approach but implemented via recursion, useful for understanding call stacks.

### 3–4. Lower & Upper Bound
- **Lower Bound:** Finds the first position where the value can be placed (or the first index ≥ target).  
- **Upper Bound:** Finds the first position where the value is strictly greater than the target.

### 5. Search Insert Position
If the target exists, return its index; otherwise, return the position where it should be inserted while keeping the array sorted.

### 6. Floor & Ceil
Finds:
- **Floor:** Largest element ≤ target
- **Ceil:** Smallest element ≥ target

### 7–8. First & Last Occurrence
- **Linear Search:** Simple scan from start to end.
- **LB/UB:** Uses binary search twice — one to find the first occurrence, another for the last.

### 9–10. Search in Rotated Sorted Array
- **I:** No duplicates — decide which half is sorted and move accordingly.
- **II:** With duplicates — skip equal elements at boundaries before deciding.

### 11. Minimum in Rotated Sorted Array
Finds the smallest element using modified binary search by checking which half is sorted.

### 12. Count Rotations
Index of the smallest element = number of times array is rotated.

### 13–14. Single Element in Sorted Array
- **Brute Force:** Linear scan and count occurrences.
- **Binary Search:** Exploit index pairing property to find the unique element in O(log n).

---

## 🛠️ Tech Stack
- **Language:** C++
- **Platform:** LeetCode
- **Editor:** VS Code

---

## 📌 Notes
- Every solution is well-commented with **logic + complexity**.
- This repo will expand as I practice more binary search variations.

---

> _"Understand the pattern, and the problem becomes predictable."_ 🚀
