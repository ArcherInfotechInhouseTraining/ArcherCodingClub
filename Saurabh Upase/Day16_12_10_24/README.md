# Archer Coding Club
# Code Description

# Hint to solve code

## DAY 15 15/10/24
   ### Validate an IP Address:
  ##### Approach:-

- Validate an IP Address:-
- To validate an IPv4 address as per the given constraints, we need to check the following:

- The address should have exactly three dots separating four segments.
- Each segment should only contain numeric characters.
- Each segment should not have leading zeros unless it is the number '0'.
- Each segment should be in the range of 0 to 255.


##### Explanation:
**Length Constraints**:

- The length of the string should be between 7 and 15 characters inclusive.
**Splitting the String**:

- Split the string by the dot (.) delimiter to get the parts.
**Number of Parts**:

- Ensure that there are exactly four parts after splitting.
**Validation of Each Part**:

- Each part should not be empty and should not exceed three characters.
- Leading zeros are not allowed unless the part is just "0".
- Each part must consist of digits only.
- Convert each part to an integer and ensure it is between 0 and 255.
**Return Result**:

- If all conditions are met, return true. Otherwise, return false.


