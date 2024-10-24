# Archer Coding Club
# Code Description

# Hint to solve code

## DAY 22 20/10/24
   ### Coins chnage(Count ways)
  ##### Approach:-

**Create a DP array**:

- Create an array dp[] where dp[i] will store the number of ways to get the sum i.
- Initialize dp[0] = 1 because there is exactly one way to make the sum 0, by choosing no coins.

**Iterate through each coin:**
- For each coin, update the DP array by calculating the number of ways to make each sum from that coin to the target sum.
- For each coin, loop through all possible sums from the coin's value to the target sum, and update the DP array by adding the ways from the previous sums.

**Update the DP array:**

- For each i from the coin's value to sum, update dp[i] as dp[i] += dp[i - coin]. This step adds the number of ways to make the sum i by including the current coin.

**Return the result:**

After processing all coins, the value dp[sum] will contain the number of ways to make the given sum.
