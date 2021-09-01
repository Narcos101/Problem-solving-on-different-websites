#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int amount_withdrawn;
    double total_money;

    cin >> amount_withdrawn >> total_money; //input
    if (amount_withdrawn % 5 == 0)
    {

        float par_balance = total_money - amount_withdrawn; //subtracting
        float balance = par_balance - 0.5;
        cout << balance; //output
    }
    else if (amount_withdrawn >= total_money)
    {
        cout << total_money;
    }
    else
    {
        cout << total_money;
    }
    return 0;
}