
**Approach:-**

1. Maintain a counter **cnt**.

2. For Each String compare the prefix of given string **str** with the prefix of that particular string i.e. **arr[i]**, if it matches then increament the cnt.

3. Return the cnt

We are iterating over the n strings and each pass takes k time so t.c. will be O(n*k).

No extra space used in this approach.

**Time Complexity:-** O(n*k)
**Space Complexity:-** O(n)
