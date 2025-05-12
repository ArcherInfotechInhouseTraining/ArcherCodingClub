# Archer Coding Club
# Code Description

# Hint to solve code

## DAY 19 16/10/24
   ### triplet with sum zero
  ##### Approach:-

**Sort the array**: 
- First, sort the array in ascending order.

**Fix one element**:
- Iterate through the array, and for each element arr[i], consider it as the first element of the triplet. The problem then reduces to finding two other elements that sum up to -arr[i].

**Use two-pointer technique:**
- For the remaining two elements, use the two-pointer technique:

- Set two pointers, left starting from the next element (i+1) and right starting from the end of the array (n-1).
- Check if the sum of the elements at arr[i], arr[left], and arr[right] equals zero.
- If the sum is zero, return true.
- If the sum is less than zero, increment the left pointer to increase the sum.
- If the sum is greater than zero, decrement the right pointer to decrease the sum.
- Continue until pointers meet: Continue moving the pointers until they meet or you find a triplet that sums to zero.

**Return false if no triplet found:**
 If you complete the iteration and no triplet is found, return false.