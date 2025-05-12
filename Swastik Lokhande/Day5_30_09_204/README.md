# Archer Coding Club
# Infosys SpringBoard
Welcome to **ArcherCodingClub**! This repository is a one-stop solution for various coding challenges and problem sets from multiple platforms, including:

# findPermutations Method Description

This Java method, `findPermutations`, is designed to find and return all possible permutations of the characters in a given string of length 3. The method takes a string as input, generates all unique permutations of the characters, and returns them as a string array.

## Method Details

- **Method Name**: `findPermutations`
- **Parameters**: 
  - `String str`: A string of exactly 3 characters.

### Assumptions

- The length of the string passed to `findPermutations()` will always be 3.

### Logic for Permutations

The method generates all possible permutations of the input string by rearranging its characters. Since the length of the string is fixed at 3, there will be `3! = 6` possible permutations. The permutations are generated systematically by swapping characters.

