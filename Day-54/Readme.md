**Approach:-**

Approach is to use 2 tops for 2 stacks represented by start and end of the array.

While top1<top2 we can push the elements.

**Push1 Logic:-** if top1+1 < top2 then we can push the element in first stack by increamenting top1.

**Push2 Logic:-** if top2-1 > top2 then we can push the element in second stack by decreamenting top2.

**Pop1 Logic:-** if top1> -1 then return the element at top1 index and decrement top1.

**Pop2 Logic:-** if top2<size then return the element at top2 index and increament top2;

All the operations are constant time taking operations.

No extra space used.

**Time Complexity:-** O(1)

**Space Complexity:-** O(1)
