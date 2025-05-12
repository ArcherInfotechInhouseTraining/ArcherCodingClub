### RotateString

The question is asking if one string, s, can be transformed into another string, goal, by repeatedly shifting its characters.
Specifically, a "shift" means moving the first character of s to the end of the string.

- Example Of Shifting :

If s = "abcde", then each shift operation would transform s as follows:

	First shift: "bcdea"
	Second shift: "cdeab"
	Third shift: "deabc"
	Fourth shift: "eabcd"
	Fifth shift: "abcde" (back to the original string)

The task is to determine if it’s possible to obtain the string goal from s by performing a series of these shifts. The number of shifts can be zero or more.

- Approach to Solve

Concatenate s with itself: When you concatenate s with itself (e.g., s + s), it contains all possible rotations of s as substrings. For example:

If s = "abcde", then s + s = "abcdeabcde".
In s + s, the substring "cdeab" appears, which is a shifted version of "abcde".
Check if goal is in s + s: If goal is a substring of s + s and goal has the same length as s, then it’s possible to transform s into goal through some number of shifts. Otherwise, it’s not possible.


