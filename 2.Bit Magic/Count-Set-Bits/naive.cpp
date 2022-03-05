#include <iostream>
using namespace std;

int count(int x)
{
    int cnt;
    while (x != 0)
    {
        if (x & 1 == 1)
            cnt++;
        x >>= 1;
    }
    return cnt;
}

int main()
{

    int num;
    cin >> num;

    int c;
    c = count(num);
    cout << c << endl;

    return 0;
}