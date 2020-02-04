# HW2-Question7

## Description:

Write a function that takes two strings from and to and determines if they are mappable.

● Two strings are mappable if the characters in from can be replaced to get to.

● Each character can only map to itself.

● The output should be a map:

○ Empty map if the mapping is not possible

○ The actual map if the mapping was possible:

Example 1:

Input: from = "add", to = "egg”

Output: {(a->e), (d->g)}

Example 2:

Input: from = "extreme", to = "egg”

Output: { }

Example 3:

Input: from = "harder", to = "waiter”

Output: { }

Example 4:

Input: from = "aabbrr", to = "ddeekk”

Output: {(a->d),(b->e), (r->k)}
