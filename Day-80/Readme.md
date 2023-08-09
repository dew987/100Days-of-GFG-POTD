**Approach:-**

Aim is to find the maximum prime factor for a number N.

**Mathematical Observations:-**
1. The number N can have all the prime factors less than or equal to sqrt(N).
2. If a prime factor is greater than sqrt(N) then surely the another prime factor will be less than sqrt(N).

**Steps:-**
1. Take a variable ans to store the answer and set it initially to 0
2. Iterate from i= 2(first prime number) to i*i<=N(while square of i is less than N),
    
    a) Divide N by i and update ans by i if ans is less than i, repeat while N gives remainder 0 when divided by i.  
3. If N>ans i.e. N is having maximum prime factor so return that maximum prime factor.
4. Return ans which is maximum prime factor.

We are iterating sqrt(N) time and each iteration takes fairly constant time so overall time complexity comes out to be O(sqrt(N)).

**Time Complexity:-** O(sqrt(N))

**Space Complexity:-** O(1)

