#include<iostream>
using namespace std;


// bool FindLetter(string s, char l)
// {


//     return false;
// }



int main()
{

string sent = "Hi there";
char c = 't';
int flag = 0;

for(int i=0;i<sent.length(); i++)
{
    if(sent[i] == 't')
    flag=1;
}
    return 0;
}