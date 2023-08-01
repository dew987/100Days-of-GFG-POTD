**Approach:-**

Approach is to use a map to store the count of the elements and whenever we encounter a repeating element we just delete it.

**Steps:-**
1. Take pointer p and q pointing to head's next and head respectively.
2. Create a map of type <int, int> to store the occurence of the elements.
3. set q->data as 1 in the map.
4. If mp1[p->data] is 1(duplicate), then delete p and set p as p's next.
    Else set q->data as 1 in the map,
    increament p and q.
5. Repeat Step 4 if p while p is not NULL.
6. Return head(new Linked list contains 0 duplicates).

We are taking just 1 iteration to remove the duplicates hence the time is O(N).

We taking a extra space of O(N).


**Time Complexity:-** O(N)

**Space Complexity:-** O(N)
