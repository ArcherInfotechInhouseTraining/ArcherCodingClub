# Archer Coding Club
# Code Description

# Hint to solve code

## DAY 17 14/10/24
   ### 0-1 knapscak Problem:
  ##### Approach:-

- Problem Breakdown:

- You are given a set of items, each with a weight and a value.
- You can either include or exclude an item in the knapsack.
- The goal is to maximize the total value in the knapsack without the total weight exceeding W.

**Dynamic Programming Table:**

- Create a 2D dp[][] table where dp[i][j] represents the maximum value that can be obtained using the first i items and a knapsack capacity j.

**Base Case:**

- When there are no items (i=0) or the capacity is zero (j=0), the maximum value is zero. Hence, dp[0][j] = dp[i][0] = 0.

**Recurrence Relation:**

**For each item i, you have two options:**

- Exclude the item: In this case, the value remains the same as without this item, i.e., dp[i-1][j].
- Include the item: If the weight of the item is less than or equal to the current capacity j, the value is val[i-1] + dp[i-1][j-wt[i-1]].
- So, dp[i][j] = max(dp[i-1][j], val[i-1] + dp[i-1][j - wt[i-1]]).

**Final Answer:**

- The value in dp[n][W] will contain the maximum value that can be obtained with a knapsack capacity W and n items.

**Detailed Steps:**

- Initialize a dp table of size (n+1) x (W+1) where n is the number of items and W is the knapsack capacity.
- Iterate through each item and each capacity from 1 to W.
- For each item, check if you can include it in the current capacity (wt[i-1] <= j). If yes, calculate the maximum value by considering both including and excluding the item.


