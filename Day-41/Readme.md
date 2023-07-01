**Approach:-**

Set bits are the bits of a number whose value is set to 1.

Iterate while number N is greater than 0, if units digit is set than increament the count. Return the count.

To check wether the unit bit is set use (N&1== 1).

The loop is iterating while N is greater than 0 and each time i am right shifting the number so time complexity comes out to be O(log2(n)).

The space complexity comes out to be O(1).

**Time Complexity:-** O(log(n))

**Space Complexity:-** O(1)
