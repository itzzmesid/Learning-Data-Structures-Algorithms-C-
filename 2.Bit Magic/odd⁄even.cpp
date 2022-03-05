#include<iostream>
using namespace std;

int main(void)
{
    int num;
    cin>>num;
    if((num & 1))
    cout<<"Odd";
    else
    cout<<"Even";
}