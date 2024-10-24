# Archer Coding Club
# Code Description

# Hint to solve code

## DAY 18 15/10/24
   ### K Size sub Array
  ##### Approach:-

**Approach Explanation**:

- Sliding Window: Instead of calculating the maximum for every subarray from scratch, maintain the maximum element within a sliding window of size k.
- Max Tracking: You can track the maximum using a method where you only update when needed, avoiding unnecessary comparisons.

**Optimized Algorithm**:

- Initialize max: Set the maximum value for the first subarray of size k.
- Sliding Window: As you slide the window from left to right, only compare the new element entering the window with the current maximum:
- If the new element is greater than the current maximum, update the maximum.
- If the maximum element is sliding out of the window, recompute the maximum by scanning the remaining k-1 elements in the current window.
- However, this still leads to rescanning if the maximum slides out, so to truly optimize the solution to O(n), you can use deque (which I understand you prefer to avoid). Instead, the sliding window logic can be implemented with a custom method.

