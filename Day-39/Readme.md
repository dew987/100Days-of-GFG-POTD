**Approach:-**

**Observations:-**
1. Each number after summing the squares of digits and replacing the number with it, at some point the number becomes a single digit number i.e. in range (1-9)
2. After calculating the numbers from 1 to 9, it is observed that only 1 and 7 are happy numbers.
3. The Non-Happy numbers in some part repeat the sequence of the patterns.

Ex) 2-> 4-> 16-> 37-> 58-> 89-> 145-> 42-> 20-> and this cycle repeats... which means it will never converge to 1.

Ex) 3-> 9-> 81-> 65-> 89-> and the above cycle repeats... which means it will never converge to 1.

**Steps:-**
1. Make a function to check whether a number is happy or not.
2. This function sums the squares of digits of numbers and replaces with original number until the number converges to a single digit number.
3. Check if the number is 1 or 7, if yes then the number is happy number, else number is not happy.

Since we are summing the digits of a number it takes log10(N) time and this is repeated N times hence time taken is O(N*log10(N)).

**Time Complexity:-** O(N*log10(N))

**Space Complexity:-** O(1)
