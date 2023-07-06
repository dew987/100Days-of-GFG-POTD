**Approach:-**

Our aim is to get the maximum profit by buying the stock when its price is low and selling when its price is high.

The buy and sell cycle can be repeated many times unless and until we are getting profit.

**Steps:-**
1. Take a variable to store the total profit incurred.
2. Set low and high as 0 as initially both are at the 1st day.
3. Traverse the prices array,
   
     a) If price[high] (The last price of stock) is less than prices[i] (current price of stock), increament high.

     //Above condition increaments high if more profit can be obtained

     b) Else, (last price of stock is greater than or equals to current of stock) then, increament profit by prices[high]-prices[low] and set low and high as index of current stock.

     //Above condition adds the profit incrurred and resets low and high to find profit in remaining prices array.

5. Increament sum by prices[high]- prices[low]. This ensures that the profit of stock sold on last day is also considered.
6. Return the sum.  

Iteration is performed only once on the prices array and hence T.C. is O(N).

No Extra space is taken so the S.C. is O(1).

**Time Complexity:-** O(N)

**Space Complexity:-** O(1)

