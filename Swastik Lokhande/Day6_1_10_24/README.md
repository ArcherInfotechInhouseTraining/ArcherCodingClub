# Archer Coding Club
# Infosys SpringBoard
Welcome to **ArcherCodingClub**! This repository is a one-stop solution for various coding challenges and problem sets from multiple platforms, including:

# Bill Class Implementation

## Problem Statement
The goal of this task is to implement a `Bill` class that simulates a bill generation system. Each bill has a unique bill ID that follows a specific format. The bill ID starts from `'B9001'` and increments by 1 for each new instance of `Bill`. The class also stores the payment mode for each bill.

### Key Concepts:
- Each bill will have a unique `billId`.
- `billId` generation is handled using a static counter initialized in a static block.
- The payment mode is passed through the constructor and assigned to an instance variable.
- Appropriate getter and setter methods must be implemented for the `paymentMode` and `billId`.

## Class Design

### 1. **Attributes**:
   - **paymentMode**: String - Stores the payment mode.
   - **billId**: String - A unique ID starting from 'B9001', auto-generated for each instance.
   - **counter**: Static integer - Tracks the numerical part of the bill ID.

### 2. **Methods**:
   - **Bill(String paymentMode)**: Constructor that initializes the `paymentMode` and generates a `billId`.
   - **getPaymentMode()**: Getter method for `paymentMode`.
   - **setPaymentMode(String paymentMode)**: Setter method for `paymentMode`.
   - **getBillId()**: Getter method for `billId`.

### 3. **Bill ID Generation**:
   - The `billId` starts from `'B9001'` and increments with each new `Bill` object.
   - The first bill will have the ID `'B9001'`, the second will have `'B9002'`, and so on.
   - This behavior is controlled by a static counter that increments for each new instance of `Bill`.

### 4. **Static Block**:
   - A static block is used to initialize the static counter which helps in generating unique `billId`s.

---

## Requirements

- Java SE Development Kit (JDK) for compiling and running the code.
- A text editor or IDE for writing the code.

---

## Implementation Steps

1. **Define the `Bill` class** with private attributes `paymentMode` and `billId`.
2. **Initialize the `counter`** in a static block starting at 9001.
3. **Implement the constructor** to accept a `paymentMode` parameter, set the value, and generate a `billId` using the `counter`.
4. **Implement the getter and setter methods** for `paymentMode` and `billId`.
5. **Create a Tester class** to verify that bill IDs are correctly generated, and payment modes are assigned as expected.
