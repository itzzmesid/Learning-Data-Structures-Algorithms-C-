#include <bits/stdc++.h>
#include<iostream>
using namespace std;

    // for (auto x : arr)
    // cout << x << " ";
int BinarySearch(vector <int> a,int start,int end,int key)
{

    while(start<=end)
    {
        int mid = start + (end-start)/2;

        if(a[mid] == key)
        return mid;

        else if(a[mid]<key)
        start = mid+1;

        else if(a[mid]>key)
        end = mid-1;
    }


return -1;

}

int main()
{
    vector<int> arr = {32,11,56,15,21,29,1};    
    //sorted = {1,11,15,21,29,32,56}
    sort(arr.begin(), arr.end());
    int s =0, e = arr.size()-1;
    int key=56;
    int res = BinarySearch(arr,s,e,key);
    
    if(res==-1)
    cout<<"Element not found";
    else
    cout<<"Element found at position"<<res;

   return 0;

}