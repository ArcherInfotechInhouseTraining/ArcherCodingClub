// Last Digit Ultimate
// Your job is to create a function, that takes 3 numbers: a, b, c 
// and returns true if the last digit of a * b = the last digit of c. Check the examples below for an explanation.

//Example
// lastDig(25, 21, 125) ➞ true
// The last digit of 25 is 5, the last digit of 21 is 1, and the last
// digit of 125 is 5, and the last digit of 5*1 = 5, which is equal
// to the last digit of 125(5).

#include<iostream>
using namespace std;

bool lastDig(int a, int b, int c) {
    int last1 = a % 10;
    int last2 = b % 10;
    int last3 = c % 10;

    return last1 * last2 == last3;
}

int main() {
    cout << boolalpha << lastDig(25, 21, 125) << endl; 
    cout << boolalpha << lastDig(48, 32, 144) << endl; 
    cout << boolalpha << lastDig(123456789, 987654321, 111111111) << endl; 
}