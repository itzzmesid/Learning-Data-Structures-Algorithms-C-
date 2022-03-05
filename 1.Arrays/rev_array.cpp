//A bruteforce approach to reverse an array using 2 pointer method
#include<iostream>
using namespace std;

void RevArray(int arr[])
{
    int start=0,end=9;
    int temp;
    while(start<end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start = start+1;
        end=end-1;

    }
        for(int i=0;i<10;i++)
    {
        cout<<arr[i];
    }

}

int main()
{
    int arr[10];
    cout<<"Enter array";
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    RevArray(arr);
    return 0;
}