#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    int k; // The position u want to check from right
    cin >> k;
    (num & (1 << (k - 1)) == 1) ? cout << "Yes" : cout << "No";
    return 0;
}
/*
Example
---------
Consider n = 0101 i.e 5. 
Suppose k = 3. Then we must get YES.
Now 1 is 0001. 1<<2 => 0100
0101 &
0100   => 1 => Yes
*/