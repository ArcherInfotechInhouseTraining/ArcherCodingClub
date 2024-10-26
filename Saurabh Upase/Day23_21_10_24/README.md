# Archer Coding Club
# Code Description

# Hint to solve code

## DAY 23 21/10/24
   ### kth smallest
##### Approach:
- Loop up to k times: We only need to sort the first 𝑘 smallest elements, so we can limit the selection sort to run 𝑘 iterations instead of sorting the entire array.

- Find the minimum element: For each iteration 𝑖(from 0 to 𝑘−1):

- Assume the element at position 𝑖 is the smallest.Loop through the rest of the array (from i+1 to the end) to find the smallest element.
- Swap this smallest element with the element at position 𝑖.

- Return the k-th smallest element: After k iterations, the k-th smallest element will be at index k−1 in a zero-based array.4
