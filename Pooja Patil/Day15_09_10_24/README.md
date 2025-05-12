### ValidPalindrome

Palindrome : means that original string after reverse it will same as original

For example : rar after reverse it will rar 

input 
String : rar 

output 
String :rar.

so the string are same after reverse are palindrom strings.

In This Program I Check The Characters Presents In String Is Alphanumeric Or Not .

and According to it Apply condition.

Create The empty String i.e String newStr=""  to store the charcter and append the string ;

First I check Empty Space in Original String i.e (s) input string Then any another charater present in String Except Alphabet and Numeric Value.

If it is not alphabet or numeric-value skip the character using continue keyword.

if condition get false that means String character is alphanumeric it will stored in empty string that is we declared for store charater in else block.

then we get the string without space and other character Except Alphabet and Numeric-Value.

after that we reverse that string using loop.

according to quetion string will be lowercase so we need to convert string  into lowercase using toLowerCase() Method .

after reverse check if string is equal to original string using .equals() method if string is match output is true else false.






 