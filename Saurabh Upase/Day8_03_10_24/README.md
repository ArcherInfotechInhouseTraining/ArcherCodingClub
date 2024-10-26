# Archer Coding Club
# Code Description

# Hint to solve code

## DAY 8 3/10/24
   ### Mimimum the Heigth II
  ##### Approach
  - Sort the Array: Sorting helps to handle the smallest and largest elements systematically.
  - Initial Difference: Calculate the initial difference between the tallest and shortest towers before any operations.
  - Iterate and Adjust Heights: For each tower, calculate the new possible heights after either increasing or decreasing by K. Ensure that no height becomes negative.
  - Minimize the Difference: While iterating, we compute the difference between the maximum and minimum tower heights after the operation and keep track of the minimum possible difference.


  #### Key Points 
  - We have to add or subtract K from each element.
  - After sorting, the minimum difference will depend on the difference between the largest and smallest possible heights after the operations.