#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int T;
    scanf("%d", &T);
    while (T--)
    {
        string input;
        cin >> input;
        int n = input.length();
        if (n % 2 == 0)
        {
            string a = "";
            string b = "";
            for (int i = 0; i < n / 2; i++)
            {
                a += input[i];
            }
            for (int i = n / 2; i < n; i++)
            {
                b += input[i];
            }

            sort(a.begin(), a.end());
            sort(b.begin(), b.end());

            if (a == b)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            string a = "";
            string b = "";
            for (int i = 0; i < (n / 2); i++)
            {
                a += input[i];
            }
            for (int j = (n / 2 + 1); j < n; j++)
            {
                b += input[j];
            }
          
            sort(a.begin(), a.end());
            sort(b.begin(), b.end());
            
            if (a == b)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}