# Username Validator

## Overview
This Java program validates usernames based on specific rules using regular expressions. The program reads multiple usernames from the user and checks if they meet the specified criteria for valid usernames.

## Username Validation Rules
A valid username must:
1. Start with an uppercase or lowercase English alphabet character (`a-z` or `A-Z`).
2. Contain between 8 and 30 characters.
3. Only contain alphanumeric characters and underscores (`a-z`, `A-Z`, `0-9`, `_`).

The regular expression used to enforce these rules is:
```java
^[a-zA-Z][a-zA-Z0-9_]{7,29}$
