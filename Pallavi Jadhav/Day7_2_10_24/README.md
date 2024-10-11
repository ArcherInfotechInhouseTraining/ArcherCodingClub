# Archer Coding Club

Welcome to **ArcherCodingClub**! This repository is a one-stop solution for various coding challenges and problem sets from multiple platforms, including:

- InterviewBit




## Logic

    you can solve this problem using greedy approach.

    here you need to take two veriables i.e sell and buy, 1st we need to buy a stock and after that we can sell it when your getting maximum profit.

    1st initialize your veriables,

    i.e

        buy = A[0]; (also you can assign a Integer.MAX_VALUE)
        sell = 0;

        in short here buy is our minimum value and sell is maximum value, here we need to check that at which day we can purchase a stock in minimum price and at which day we sell it that we can get a maximum profit.

        profit = sell - buy;

        max = 0;

        for each iteration we need to update our sell and buy values and check our profit,
        if we get our profit is greater than the max then we will store our profit into
        max.
        i.e max = profit; 

