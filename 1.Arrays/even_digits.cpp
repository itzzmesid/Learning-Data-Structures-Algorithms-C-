//Given an array nums of integers, return how many of
// them contain an even number of digits.

#include<iostream>
using namespace std;

    int EvenNum(int n)
    {
        int c = 0;
        while(n>0)
        {
            c = c+1;
            n = n/10;
        }
        return c;
    }
    
    int findNumbers(int nums[],int n) {
        int t=0;
        int temp;
        for(int i=0;i<n; i++)
        {
            temp = EvenNum(nums[i]);
            if(temp%2==0)
                t++;
        }
        
        return t;
    }


int main()
{
    int arr[] = {12,345,2,6,7896,24};
    int s = sizeof(arr)/sizeof(arr[0]);
    int res = findNumbers(arr,s);
    cout<<res;


}