# Archer Coding Club
# Code Description

# Hint to solve code

## DAY 14 10/10/24
   ### Minimum Platform :
  ##### Approach:-

**Sort the Arrival and Departure Times**:

- First, sort both the arrival and departure times independently.
**Use Two Pointers**:
- one for the sorted arrival array and another for the sorted departure array.
- Traverse both arrays simultaneously to simulate the movement of trains in and out of the station.

**Count Platforms in Use**:

**Initialize two variables**:
- platforms_needed = 0 to keep track of the current number of platforms required at any time.
- max_platforms = 0 to store the maximum number of platforms needed at any time.
- Iterate Through the Arrays:

**Start comparing the elements of the sorted arrival and departure arrays**:
- If the arrival time of a train is less than or equal to the departure time of another, increment the platforms_needed (a train has arrived and needs a platform).
- If the arrival time is greater than the departure time, it means a train has departed, so decrement platforms_needed.
- Update max_platforms to hold the maximum value of platforms_needed at any given point.
- Continue Until All Trains are Processed:

- Keep comparing the arrival and departure times and update the platform counts accordingly until all the trains are processed.