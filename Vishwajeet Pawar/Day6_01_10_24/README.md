# Code Description
- The program uses a HashSet to keep track of unique pairs of strings. It takes an integer t as input, representing the number of pairs, followed by t pairs of strings. After adding each pair to the HashSet, the program prints the current size of the set, which represents the number of unique pairs added so far.
## The program works as follows:



## How It Works
### Input Reading:
- The program starts by reading an integer t, which represents the number of pairs to be input. It then reads t pairs of strings and stores them in two arrays: pair_left[] and pair_right[].

#### Unique Pair Tracking:
- It utilizes a HashSet to store the concatenated pairs (each pair represented as "left right"). The uniqueness of the pairs is ensured by the HashSet, which does not allow duplicate entries.

#### Output:
- After adding each pair to the HashSet, the program prints the current size of the set, which reflects the count of unique pairs.
