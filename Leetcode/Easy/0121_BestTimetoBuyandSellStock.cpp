#include <bits\stdc++.h>

using namespace std;

int maxProfit(vector<int>& prices);

int main(void)
{
    vector<int> arr = {7,1,5,3,6,4};
    cout << maxProfit(arr);

}

int maxProfit(vector<int>& prices)
{
    int profit = 0;
    int mini = prices[0];
    for (int i = 0, l = prices.size(); i < l; i++)
    {
        int temp = prices[i] - mini;
        if (temp > profit)
        {
            profit = temp;
        }
        if (prices[i] < mini){
            mini = prices[i];
        }
    }
    return profit;
}