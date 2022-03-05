//32 bit number is provided as I/P & its divided into
//8 bit chunks(There will be 4chunks then).
#include <iostream>
using namespace std;

int table[256];
void initialize()
{
    table[0] = 0;
    for (int i = 1; i < 256; i++)
        table[i] = (i & 1) + table[i / 2];
}

int lookup(int num)
{
    int res = table[num & 0xff]; //0xff is the last 8 bits
    num = num >> 8;
    res = res + table[num & 0xff];
    num = num >> 8;
    res = res + table[num & 0xff];
    num = num >> 8;
    res = res + table[num & 0xff];
    return res;
}

int main()
{
    initialize();
    for(int j=0; j<256;j++)
    {
        cout<<table[j]<<endl;
    }
    int n;
    cin >> n;
    int c = lookup(n);
    cout << c << endl;

    return 0;
}