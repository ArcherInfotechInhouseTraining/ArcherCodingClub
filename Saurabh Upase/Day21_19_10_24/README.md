# Archer Coding Club
# Code Description

# Hint to solve code

## DAY 21 19/10/24
   ### Next Greater element
  ##### Approach:-

- To find the next greater element for each element in an array efficiently, you can use a stack-based approach. Here's how the approach works:

- Initialize an empty stack: This will store the indices of elements for which the next greater element is not yet found.

- Traverse the array from right to left:

- For each element, pop elements from the stack until you find a greater element or the stack becomes empty.
- If the stack is empty, it means there is no greater element to the right, so the next greater element is -1 for the current element.
- If the stack contains elements, the top of the stack will be the next greater element.
- Push the current element onto the stack: After checking for the next greater element, push the current element (or its index) to keep track of it for future comparisons.

