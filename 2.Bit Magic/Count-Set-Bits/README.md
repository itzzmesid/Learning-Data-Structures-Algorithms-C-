## Naive Approach
---
* We just take the number, `AND` it with 1 (gives 1 if the last digit of number is 1 else 0).
* Increment the counter if the result of AND is 1.
* Then right shift it to remove the last bit.
* Continue till the number is not 0
* Complexity : O(no: of bits)

## Brian Kerninghan Algorithm
---
* This algorithm is based on the fact that whenever we subtract the number with 1, `all bits after the set bit(including the left most set bit itself) becomes toggled i.e 0 becomes 1 and 1 becomes 0`
* This subtraction and AND process is repeated until the number becomes 0.










#### NOTE*
We can use `__builtin_popcount(n);` to find set bits of n
