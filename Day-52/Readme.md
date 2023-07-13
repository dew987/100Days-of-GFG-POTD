**Approach:-**

Approach is to divide the power in twice number raise to power/2.

ex) 2^14 = 2^7 * 2^7

ex) 2^8= 2^4 * 2^4

and if power is odd then, 

ex) 2^5= 2* (2^4 * 2^4)

This approach minimizes the multication time taken from O(n) to O(logn) since we are dividing the power each time by a factor 2.

Recursive solution is used here hence it also takes O(logn) space for recursive tree stack.
1. Base condition:- power is 0 then return 1
2. If power is even then return n^power/2 * n^power/2
3. Else return n* (n^power/2* n^power/2)

**Time Complexity:-** O(LogN)

**Space Complexity:-** O(LogN)