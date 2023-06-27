**Approach:-**

There are multiple ways to solve this question, we can use these data structures:-
1. Vector
2. Set
3. Priority queue(min heap)

I have solved this question using priority queue(min heap).

**Steps:-**
1. Create a priority queue.
2. Push the elements of first linked list in the priority queue.
3. Push the elements of second linked list in the priority queue.
4. Create an empty Node pointer and remove top elements sequentially from the priority queue and add them to the new linked list. Ensuring that the last element of the linked list not equals to the top element of priority queue.(Duplicacy avoidance)
5. Return the newly created linked list.

We are fetching the top element from a priority queue takes O(log(N+M)) time for rearranging the elements and this step is repeated (N+M) times.

Since priority queue is used maximum space used will be the no. of elements i.e. N+M.

**Time Complexity:-** O((N+M)log(N+M))

**Space Complexity:-** O(N+M)
