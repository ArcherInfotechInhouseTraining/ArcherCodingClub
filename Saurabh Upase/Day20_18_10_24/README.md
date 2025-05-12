# Archer Coding Club
# Code Description

# Hint to solve code

## DAY 20 18/10/24
   ### Perfect Sum Problem
  ##### Approach:-

**Define a DP table**:
- Let dp[i][j] represent the number of subsets that can be formed from the first i elements that have a sum equal to j.

**Base Case:**
- For any i, dp[i][0] = 1 (since there is one subset with sum 0, the empty subset).

**Recursive Relation:**
- For each element in the array, you have two options:
- Include the element in the subset.
- Exclude the element from the subset.
- Update the DP table using the relation:

- dp[i][j] = dp[i-1][j] + dp[i-1][j - arr[i-1]];
- Here, dp[i-1][j] counts the subsets excluding the current element.
- dp[i-1][j - arr[i-1]] counts the subsets including the current element if j >= arr[i-1].

**Final Result:**
- The final answer will be stored in dp[n][sum].

**Modulo Operation:**
Since the result can be very large, take the modulo 1e9+7 at each step to avoid overflow.

