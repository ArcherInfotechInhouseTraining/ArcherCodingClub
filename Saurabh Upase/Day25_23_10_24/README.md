# Archer Coding Club
# Code Description

# Hint to solve code

## DAY 25 23/10/24
   ### Power of Numbers:
  ##### Approach:-
Initialize Variables:

- Set a constant mod to 109+7 for taking results modulo this value to avoid overflow and keep the results manageable.
- Initialize ans to 1, which will eventually hold the result of 𝑁 𝑅 mod.
- Set multi to N, representing the current base value for exponentiation.

Loop Until Exponent R is Zero:
- Check if R is Odd:
- If R is odd, multiply ans by multi and take the result modulo mod to ensure the result stays within the bounds.

- Halve the Exponent:
-Divide R by 2. This reduces the exponent by half for the next iteration.

- Square the Base:
- Square the value of multi and take the result modulo mod to update the base for the next iteration.

- Return the Result:
- Once R is reduced to zero, the final value of ans is the result of  𝑁 𝑅 mod 1000000007