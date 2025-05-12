# Archer Coding Club
# Infosys Springboard
Welcome to **ArcherCodingClub**! This repository is a one-stop solution for various coding challenges and problem sets from multiple platforms, including:

# MovieTicket Class Description

This Java program is designed to implement a class named `MovieTicket`, which manages the booking of movie tickets and calculates the total cost, including tax. Below is a detailed description of the `MovieTicket` class, its methods, and how they work.

## Class Details

- **Class Name**: `MovieTicket`

### Instance Variables

- `int movieId`: Represents the unique ID for each movie. This variable will determine the cost per ticket based on the provided ID.
- `int noOfSeats`: Represents the number of seats/tickets to be booked for a given movie.
- `double costPerTicket`: Represents the cost of each ticket, which varies depending on the `movieId`.

### Constructor

- **`MovieTicket(int movieId, int noOfSeats)`**
  - Initializes the instance variables `movieId` and `noOfSeats` with the values passed as arguments.

### Methods

- **`calculateTotalAmount()`**: 
  - This method calculates the total amount to be paid for booking the tickets.
  - It uses the `costPerTicket` to calculate the base cost by multiplying it with `noOfSeats`.
  - A 2% tax is applied to the total amount, and the final amount is rounded using the `Math.round(double a)` method to provide a neat value.
  - The method returns the rounded total amount to be paid. 
