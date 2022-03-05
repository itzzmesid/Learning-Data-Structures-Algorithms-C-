//This is the program for doing binary searches
//irrespective of the order in which array elements
//are sorted i.e a BS that works with both ASC & DESC

#include <bits/stdc++.h>
#include<iostream>
using namespace std;


int OrderAgnBinarySearch(vector <int> a, int start, int end,int ele)
{
    bool isAsc = a[start]<a[end];
    
    while(start<=end)
    {   
        int mid = start + (end-start)/2;
        if(a[mid] == ele)
            return mid;
        
        if(isAsc){
            if(a[mid]<ele)
            start = mid+1;
            else
            end = mid-1;
            }
        else
        {
            if(a[mid]<ele)
            end = mid-1;
            else
            start = mid+1;
        }
    }

    return -1;

}

int main()
{
    vector<int> arr = {32,11,56,15,21,29,1};    
    //sorted = {1,11,15,21,29,32,56}
    // sort(arr.begin(), arr.end()); //ASC  
    sort(arr.begin(), arr.end(), greater<int>());   //DESC
    int s =0, e = arr.size()-1;
    int key=56;
    int res = OrderAgnBinarySearch(arr,s,e,key);
    
    if(res==-1)
    cout<<"Element not found";
    else
    cout<<"Element found at position"<<res;

   return 0;

}