# Archer Coding Club
# Code Description

# Hint to solve code

## DAY 13 9/10/24
   ### smallest Positive Number :
  ##### Approach:-

- We'll use the indexing technique to mark positions in the array, which allows us to track the presence of positive integers directly in the array itself. Here's a **step-by-step breakdown of the approach**:

**Key Observations**:
- Positive Numbers Only: The smallest missing positive number must be between 1 and n+1 (where n is the size of the array). This is because if the array contains all - numbers from 1 to n, then the missing number will be n+1.

- Ignore Non-Positive Numbers and Out-of-Range Numbers: Since we're only concerned with positive numbers in the range [1, n], we can ignore all negative numbers and numbers larger than n because they can't be the answer.

**Steps**:
- Replace out-of-range numbers: First, replace all negative numbers and zeros (or numbers greater than n) with a number outside the range, e.g., n+1.

- Mark presence of numbers: Use the array itself to mark the presence of numbers in the range [1, n] by converting the value at the corresponding index to a negative - value. For example, if we encounter the number 3, we mark the position arr[2] (index 3-1) as negative.

- Identify the first missing positive: After marking the presence of numbers, the first index that contains a positive value corresponds to the smallest missing positive integer.

**Detailed Steps**:
- Step 1: Traverse the array and replace any number <= 0 or > n with n+1.
- Step 2: For each number x in the array, if 1 <= x <= n, mark arr[x-1] as negative to indicate that the number x is present in the array.
- Step 3: Traverse the array again and find the first index i where arr[i] > 0. This index corresponds to the missing positive number i+1.
- Step 4: If all the numbers from 1 to n are present, then the smallest missing positive number is n+1.

