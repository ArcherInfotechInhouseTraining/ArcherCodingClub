// Create a function that counts the number of syllables a word has. Each syllable is separated with a dash -.
/* 
numberSyllables("buf-fet") ➞ 2

numberSyllables("beau-ti-ful") ➞ 3

numberSyllables("mon-u-men-tal") ➞ 4

numberSyllables("on-o-mat-o-poe-ia") ➞ 6 */

#include<iostream>
using namespace std;

int numberSyllables(string word) {
    int count = 0;
    int i = 0;
    while(word[i] != '\0') {
        if(word[i] == '-'){
            count++;
        }
        i++;
    }
    return count + 1;
}

int main() {
    string str;
    cout<<"Enter a string with - separator: ";
    cin >> str;

    cout << "Number of syllables in the string: " << numberSyllables(str) << endl;
    
    return 0;
}