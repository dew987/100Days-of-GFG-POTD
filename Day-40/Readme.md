**Approach:-**

**Observations:-**
1. A number is dividend is divisible by divisor if it gives remainder 0.
2. Left shifting a number doubles it.
3. Left shifting a number and placing unit digits bit as set, doubles the number and adds 1 to it.

**Steps:-**
1. Take a variable ans and set it to 0.
2. Iterate over the string and left shift and add the digit(reprsented by char) to the ans also taking the mod w.r.t 3 of it.
3. **ans= (ans*2 + (s[i]- '0'))%3**

The mod operation reduces the ans in the range 0-2 so that it will be easy for further iterations to calculate.
The use of only 1 loop to iterate over the string results overall Time complexity comes out to be O(n)
The space complexity comes out to be O(1).

**Time Complexity:-** O(n)

**Space Complexity:-** O(1)
