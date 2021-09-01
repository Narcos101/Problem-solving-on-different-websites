#include <bits/stdc++.h>

using namespace std;

int main()

{

    vector<int> palin, antipalin;

    string s;

    int t;

    cout << "Enter no of test cases";

    cin >> t;

    while (t--)

    {

        int count1 = 0, count2 = 0, i = 0;

        cout << "\nEnter binary string ";

        cin >> s;

        int len = s.length();

        for (i = 0; i < len; i++)

        {

            if (s[i] == s[len - i - 1])

            {

                palin.push_back(i);

                count1++;
            }

            else

            {

                antipalin.push_back(i);

                count2++;
            }
        }

        cout << "\n"
             << count1 << " " << count2 << "\n";

        for (int i = 0; i < count1; i++)

        {

            cout << palin[i] << " ";
        }

        cout << endl;

        for (int i = 0; i < count2; i++)

        {

            cout << antipalin[i] << " ";
        }
    }

    return 0;
}