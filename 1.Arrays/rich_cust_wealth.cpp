//1672. Richest Customer Wealth
//https://leetcode.com/problems/richest-customer-wealth/

/*
TRAVERSING A 2D VECTOR
   for (int i = 0; i < vect.size(); i++)
    {
        for (int j = 0; j < vect[i].size(); j++)
        {
            cout << vect[i][j] << " ";
        }   
        cout << endl;
    }
*/
#include<iostream>
#include<vector>

using namespace std;

int maximumWealth(vector<vector<int>>& accounts) {

    int max_wealth = 0;
    for(int customer=0;customer<accounts.size();customer++)
    {   int wealth=0;
        for(int account=0;account<accounts[account].size(); account++)
        {
            wealth+=accounts[customer][account];

        }
        if(wealth>max_wealth)
        max_wealth = wealth;

    }
    return max_wealth;
}

int main(){

    vector<vector <int>> money;

    money = {
            {1,2,3}, //usr1
            {3,2,5}  //usr2
            };

    int res = maximumWealth(money);
    cout<<res;

    return 0;
}