# LeetCode Solutions

My collection of **LeetCode solutions in C++**, organized by problem-solving patterns rather than just problem number.

The goal of this repository is to document my DSA journey, understand the underlying patterns, and gradually build a solid problem-solving foundation.

---

## 📂 Problems Solved → 37 (31 LC/6 GG) 

### 2 Pointers

| # | Problem | LeetCode | Key Pattern | Solution |
|---|---|---|---|---|
| 1 | Two Sum II - Input Array Is Sorted | [LC 167](https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/) | Two Pointers | [C++](./1.%202%20Pointers/1.Two%20Sum%20(already%20sorted%20arr)%20LC%20167.cpp) |
| 2 | Remove Duplicates from Sorted Array | [LC 26](https://leetcode.com/problems/remove-duplicates-from-sorted-array/) | Two Pointers | [C++](./1.%202%20Pointers/2.Remove%20duplicate%20from%20sorted%20arr%20for%20first%20k%20elements%20LC%2026.cpp) |
| 3 | Squares of a Sorted Array | [LC 977](https://leetcode.com/problems/squares-of-a-sorted-array/) | Two Pointers | [C++](./1.%202%20Pointers/3.Square%20of%20sorted%20arr%20with%20-ve%20elements%20LC%20977.cpp) |
| 4 | 3Sum | [LC 15](https://leetcode.com/problems/3sum/) | Two Pointers | [C++](./1.%202%20Pointers/4.3sum%20to%200%20LC%2015.cpp) |
| 5 | 3Sum Closest | [LC 16](https://leetcode.com/problems/3sum-closest/) | Two Pointers | [C++](./1.%202%20Pointers/5.3sum%20closest%20to%20target%20LC%2016.cpp) |
| 6 | Triplets with Smaller Sum | [GG](https://www.geeksforgeeks.org/problems/count-triplets-with-sum-smaller-than-x5549/1) | Two Pointers | [C++](./1.%202%20Pointers/6.Triplets%20with%20Smaller%20Sum%20GG.cpp) |
| 7 | Sort Colors | [LC 75](https://leetcode.com/problems/sort-colors/) | Dutch National Flag / Two Pointers | [C++](./1.%202%20Pointers/7.Dutch%20National%20Flag%20LC%2075.cpp) |
| 8 | Merge Sorted Array (No Extra Space) | [LC 88](https://leetcode.com/problems/merge-sorted-array/) | Three Pointers | [C++](./1.%202%20Pointers/8.Merge%20sorted%20array%20no%20extra%20space%20LC%2088.cpp) |

### Sliding Window

| # | Problem | LeetCode | Key Pattern | Solution |
|---|---|---|---|---|
| 1 | Max Sum Subarray of size K | [GG](https://www.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1) | Sliding Window (Fixed Size & Max Window) | [C++](./2.%20Sliding%20Window/1.Max%20Sum%20Subarray%20of%20size%20K%20GG.cpp) |
| 2 | Minimum Size Subarray Sum | [LC 209](https://leetcode.com/problems/minimum-size-subarray-sum/) | Sliding Window (Variable Size & Min Window) | [C++](./2.%20Sliding%20Window/2.Minimum%20Size%20Subarray%20Sum%20LC%20209.cpp) |
| 3 | Longest Substring with K Uniques | [GG](https://www.geeksforgeeks.org/problems/longest-k-unique-characters-substring0853/1) | Sliding Window (Variable Size & Max Window) | [C++](./2.%20Sliding%20Window/3.Longest%20Substring%20with%20K%20Uniques%20GG.cpp) |
| 4 | Fruit Into Baskets | [LC 904](https://leetcode.com/problems/fruit-into-baskets/) | Sliding Window (Variable Size & Max Window) | [C++](./2.%20Sliding%20Window/4.Fruit%20Into%20Baskets%20LC%20904.cpp) |
| 5 | Longest Substring Without Repeating Characters | [LC 3](https://leetcode.com/problems/longest-substring-without-repeating-characters/) | Sliding Window (Variable Size & Max Window) | [C++](./2.%20Sliding%20Window/5.Longest%20Substring%20Without%20Repeating%20Characters%20LC%203.cpp) |
| 6 | Longest Repeating Character Replacement | [LC 424](https://leetcode.com/problems/longest-repeating-character-replacement/) | Sliding Window (Variable Size & Max Window) | [C++](./2.%20Sliding%20Window/6.Longest%20Repeating%20Character%20Replacement%20LC%20424.cpp) |
| 7 | Max Consecutive Ones III | [LC 1004](https://leetcode.com/problems/max-consecutive-ones-iii/) | Sliding Window (Variable Size & Max Window) | [C++](./2.%20Sliding%20Window/7.Max%20Consecutive%20Ones%20III%20LC%201004.cpp) |
| 8 | Subarray Product Less Than K | [LC 713](https://leetcode.com/problems/subarray-product-less-than-k/) | Sliding Window (Variable Size & Max Window) | [C++](./2.%20Sliding%20Window/8.Subarray%20Product%20Less%20Than%20K%20LC%20713.cpp) |
| 9 | Minimum Window Substringn | [LC 76](https://leetcode.com/problems/minimum-window-substring/) | Sliding Window (Variable Size & Min Window) | [C++](./2.%20Sliding%20Window/9.Minimum%20Window%20Substring%20LC%2076.cpp) |

### Fast and Slow Pointers

| # | Problem | LeetCode | Key Pattern | Solution |
|---|---|---|---|---|
| 1 | Linked List Cycle Detect | [LC 141](https://leetcode.com/problems/linked-list-cycle/) | Fast and Slow Pointers (Linked List) | [C++](3.%20Fast%20and%20Slow%20Pointers/1.Linked%20List%20Cycle%20Detect%20LC%20141.cpp) |
| 2 | Linked List Cycle Start Point | [LC 142](https://leetcode.com/problems/linked-list-cycle-ii/) | Fast and Slow Pointers (Linked List) | [C++](3.%20Fast%20and%20Slow%20Pointers/2.Linked%20List%20Cycle%20Start%20Point%20LC%20142.cpp) |
| 3 | Middle of the Linked List | [LC 876](https://leetcode.com/problems/middle-of-the-linked-list/) | Fast and Slow Pointers (Linked List) | [C++](3.%20Fast%20and%20Slow%20Pointers/3.Middle%20of%20the%20Linked%20List%20LC%20876.cpp) |
| 4 | Find the Duplicate Number | [LC 287](https://leetcode.com/problems/find-the-duplicate-number/description/) | Fast and Slow Pointers (Array) | [C++](3.%20Fast%20and%20Slow%20Pointers/4.Find%20the%20Duplicate%20Number%20LC%20287.cpp) |
| 5 | Happy Number | [LC 202](https://leetcode.com/problems/happy-number/) | Fast and Slow Pointers (Number) | [C++](3.%20Fast%20and%20Slow%20Pointers/5.Happy%20Number%20LC202.cpp) |

### Kadane

| # | Problem | LeetCode | Key Pattern | Solution |
|---|---|---|---|---|
| 1 | Maximum Sum Subarray | [LC 53](https://leetcode.com/problems/maximum-subarray/description/) | Kadane | [C++](4.%20Kadane/1.Maximum%20Subarray%20LC%2053.cpp) |
| 2 | Minimum Sum Subarray | [GG](https://geeksforgeeks.org/problems/smallest-sum-contiguous-subarray/1) | Kadane | [C++](4.%20Kadane/2.Minimum%20Sum%20Subarray%20GG.cpp) |
| 3 | Maximum Product Subarray | [LC 152](https://leetcode.com/problems/maximum-product-subarray/description/) | Kadane | [C++](4.%20Kadane/3.Maximum%20Product%20Subarray%20LC%20152.cpp) |
| 4 | Maximum Subarray Sum with One Deletion | [LC 1186](https://leetcode.com/problems/maximum-subarray-sum-with-one-deletion/description/) | Kadane | [C++](4.%20Kadane/4.Maximum%20Subarray%20Sum%20with%20One%20Deletion%20LC%201186.cpp) |
| 5 | Maximum Absolute Sum of Any Subarray | [LC 1749](https://leetcode.com/problems/maximum-absolute-sum-of-any-subarray/description/) | Kadane | [C++](4.%20Kadane/5.Maximum%20Absolute%20Sum%20of%20Any%20Subarray%20LC%201749.cpp) |
| 6 | Maximum Sum Circular Subarray | [LC 918](https://leetcode.com/problems/maximum-sum-circular-subarray/description/) | Kadane | [C++](4.%20Kadane/6.Maximum%20Sum%20Circular%20Subarray%20LC%20918.cpp) |

### Prefix Sum

| # | Problem | LeetCode | Key Pattern | Solution |
|---|---|---|---|---|
| 1 | Find Pivot Index | [LC 724](https://leetcode.com/problems/find-pivot-index/description/) | Prefix Sum | [C++](5.%20Prefix%20Sum/1.Find%20Pivot%20Index%20LC%20724.cpp) |
| 2 | Subarray Sum Equals K | [LC 560](https://leetcode.com/problems/subarray-sum-equals-k/description/) | Prefix Sum | [C++](5.%20Prefix%20Sum/2.Subarray%20Sum%20Equals%20K%20LC%20560.cpp) |
| 3 | Subarray Sums Divisible by K | [LC 974](https://leetcode.com/problems/subarray-sums-divisible-by-k/description/) | Prefix Sum | [C++](5.%20Prefix%20Sum/3.Subarray%20Sums%20Divisible%20by%20K%20LC%20974.cpp) |
| 4 | Contiguous Array | [LC 525](https://leetcode.com/problems/contiguous-array/description/) | Prefix Sum | [C++](5.%20Prefix%20Sum/4.Contiguous%20Array%20LC%20525.cpp) |

### Merge Intervals

| # | Problem | LeetCode | Key Pattern | Solution |
|---|---|---|---|---|
| 1 | Merge Intervals | [LC 56](https://leetcode.com/problems/merge-intervals/description/) | Merge Intervals | [C++](6.%20Merge%20Intervals/1.Merge%20Intervals%20LC%2056.cpp) |
| 2 | Insert Interval | [LC 57](https://leetcode.com/problems/insert-interval/description/) | Merge Intervals | [C++](6.%20Merge%20Intervals/2.Insert%20Interval%20LC%2057.cpp) |
| 3 | Interval List Intersection | [LC 986](https://leetcode.com/problems/interval-list-intersections/description/) | Merge Intervals & Two Pointers | [C++](6.%20Merge%20Intervals/3.Interval%20List%20Intersection%20LC%20986.cpp) |
| 4 | Overlapping Intervals | [GG](https://www.geeksforgeeks.org/problems/overlapping-intervals--174556/1) | Merge Intervals | [C++](6.%20Merge%20Intervals/4.Overlapping%20Intervals%20GG.cpp) |
| 5 | Min Meeting Rooms | [GG](https://www.geeksforgeeks.org/problems/attend-all-meetings-ii/1) | Merge Intervals & Two Pointers | [C++](6.%20Merge%20Intervals/5.Min%20Meeting%20Rooms%20GG.cpp) |

---

## 🧠 Patterns I'm Learning

### Two Pointers
Using two indices to reduce unnecessary work and solve array problems efficiently.

### Sliding Window
Using a dynamic range of elements to efficiently solve subarray and substring problems.

### Fast & Slow Pointers
Using two pointers moving at different speeds to efficiently detect cycles, find cycle start point or midpoint.

### Kadane

Efficiently finds the best(max/min) answer(sum/product) of a contiguous subarray by tracking the best subarray ending at each position.

### Prefix Sum

Precomputing cumulative sums to answer range/subarray sum queries efficiently.

### Merge Intervals

Sorting intervals and merging overlapping ranges into a single continuous interval.

---

## 🛠️ Language

- **C++**

---

## 📈 Progress

This repository will continue to grow as I solve more problems and learn new DSA patterns.

The focus isn't just on collecting solved problems, but on understanding **why the solution works, its complexity, and when the pattern can be reused.**

---

## 🎯 Goal

Build strong fundamentals in:

- Arrays & Strings
- Two Pointers
- Sliding Window
- Hashing
- Binary Search
- Linked Lists
- Stacks & Queues
- Trees & Graphs
- Recursion & Backtracking
- Dynamic Programming

---

> **One problem at a time. One pattern at a time.**