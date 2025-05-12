# Archer Coding Club
# Code Description

# Hint to solve code

## DAY 12 8/10/24
   ### Peak element :
  ##### Approach:-

- First approach -> Brute force ✅
- Time Complexity -> O(n)

- Space Complexity -> O(1)

- Thinking Process -> A peak element is defined as an element that is greater than its neighboring elements. Neighboring elements for an index 'i' are the elements at positions 'i-1' and 'i+1'. 

- For example, in the array [1, 2, 3], the neighbors of 2 are {1, 3}.

- In our approach, we iterate through each element in the array. At each index, we check whether the element is greater than its neighbors. For indices 0 and n-1, there is only one neighbor, and we check accordingly. If a peak element is found, we return its index. If no peak element is found, we return -1.

- Edge Case: If the array size is one, the only element is greater than its non-existent neighbors. Therefore, we return 0.


