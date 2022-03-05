//To find the smallest number in an array

#include<iostream>
using namespace std;

int MinNum(int a[],int n)
{
    int min_num = a[0];
    int index;
    for(int i=1;i<n;i++)
    {
        if(a[i]<min_num)
        {
        min_num = a[i];
        index = i;
        }
        // else 
        // return -1;
    }
    return min_num;

}

int main()
{
    int arr[] = {12,4,1,33,56,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int res = MinNum(arr,n);
    if (res ==-1)
    cout<<"There is no smaller number! All elements are identical";
    else
    cout<<res<<"  is the smallest number";
    return 0;
}