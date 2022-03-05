/* This alg is more eficient than naive approach which has complexity of O(no; of bits)
Brian K alg gives the soln in O(no:of set bits)
*/

#include <iostream>
using namespace std;

int brian_kerninghan(int a)
{
    int c = 0;
    while (a > 0)
    {
        a = (a & (a - 1));
        c++;
    }
    return c;
}

int main()
{
    int num;
    cin >> num;
    int cnt;
    cnt = brian_kerninghan(num);
    cout << cnt << endl;

    return 0;
}