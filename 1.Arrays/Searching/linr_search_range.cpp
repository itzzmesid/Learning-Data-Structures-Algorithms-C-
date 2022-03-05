#include <iostream>
using namespace std;

bool RangeSearch(int arr[],int start, int end, int ele)
{
    // int s = (sizeof(arr)/sizeof(arr[0]));
    for(int j =start;j<=end;j++)
    {
        if(arr[j]==ele)
        return true;
    }
    
    return false;

}

int main()
{             //0  1 2 3 4 5 6  7
    int arr[] ={12,3,5,6,7,8,11,91};
    // int n = (sizeof(arr)/sizeof(arr[0]));
    int key=91;
    bool res;
    res = RangeSearch(arr,1,5,key);
    cout<<res;
    return 0;
}