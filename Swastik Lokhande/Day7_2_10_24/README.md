# Archer Coding Club
# Infosys SpringBoard
Welcome to **ArcherCodingClub**! This repository is a one-stop solution for various coding challenges and problem sets from multiple platforms, including:

# Cab Service Provider Application

## Problem Statement

You are required to develop a cab service provider application by implementing the classes based on the given class diagram and method descriptions. The system will compute rewards for drivers based on their ratings and the cab service they are associated with.

### Key Requirements:

- Create a class `CabServiceProvider` to represent the cab service and its drivers.
- Implement the constructor to initialize instance variables.
- Implement the `calculateRewardPrice(Driver driver)` method to compute the driver’s bonus based on the given table.
- Perform a case-sensitive comparison where applicable.
- Round off the calculated bonus to 2 decimal places.
- Ensure proper use of getter and setter methods.

### Reward Calculation:

- **Bonus Calculation Based on Rating:**
  - If the driver’s average rating is less than 4, the bonus is 0.
  - Bonuses are calculated as follows based on the service provider:
    - **Ola:** ₹10 per cab for ratings between 4 and 4.5 (inclusive), and ₹15 per cab for ratings above 4.5.
    - **Uber:** ₹8 per cab for ratings between 4 and 4.5 (inclusive), and ₹12 per cab for ratings above 4.5.
    - **Lyft:** ₹5 per cab for ratings between 4 and 4.5 (inclusive), and ₹10 per cab for ratings above 4.5.

---

## Class Design

### 1. **CabServiceProvider Class**:
   - **Attributes**:
     - `cabServiceName`: The name of the cab service (e.g., Ola, Uber, Lyft).
     - `totalCabs`: The total number of cabs in the service provider’s fleet.
   
   - **Constructor**:
     - `CabServiceProvider(String cabServiceName, int totalCabs)`: Initializes the instance variables with values provided by the constructor parameters.

   - **Methods**:
     - `calculateRewardPrice(Driver driver)`: Calculates and returns the reward (bonus) of a driver based on their average rating and the number of cabs.

     - **Bonus Rules**:
       - For ratings less than 4, the bonus is 0.
       - Depending on the cab service name (`cabServiceName`) and the driver’s rating, the reward per cab varies.
       - Ensure proper rounding to 2 decimal places.

     - **Cab Service Bonus Calculation**:
       - For `Ola`:
         - ₹10 per cab for ratings between 4 and 4.5 (inclusive).
         - ₹15 per cab for ratings above 4.5.
       - For `Uber`:
         - ₹8 per cab for ratings between 4 and 4.5 (inclusive).
         - ₹12 per cab for ratings above 4.5.
       - For `Lyft`:
         - ₹5 per cab for ratings between 4 and 4.5 (inclusive).
         - ₹10 per cab for ratings above 4.5.

### 2. **Driver Class**:
   - **Attributes**:
     - `driverName`: Name of the driver.
     - `averageRating`: Average rating of the driver.

   - **Constructor**:
     - `Driver(String driverName, double averageRating)`: Initializes the instance variables with values passed to the constructor.
   
   - **Methods**:
     - Getter and setter methods for each attribute.

---

## Requirements

- Java SE Development Kit (JDK) to compile and run the code.
- A text editor or IDE for writing the code.

---