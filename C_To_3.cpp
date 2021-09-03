#include <bits/stdc++.h>
using namespace std;

int main()
{
    //int N;
    string S;

    cin >> S;

    int l = S.size(), N[l], sum = 0;
    for (int i = 0; i < l; i++)
    {
        N[i] = S[i] - '0';
        //cout << N[i] << " ";
        sum += N[i];
        N[i] %= 3;
        //cout << N[i] << " ";
    }

    int ans = -1;
    if (sum < 3 || (l == 1 && sum % 3 != 0))
    {
        ans = -1;
    }
    else if (sum % 3 == 0)
    {
        ans = 0;
    }
    else if (sum % 3 == 1)
    {
        for (int i = 0; i < l; i++)
        {
            if (N[i] == 1)
            {
                ans = 1;
                break;
            }
        }
        if (ans == -1)
        {
            int cnt = 0;
            for (int i = 0; i < l; i++)
            {
                if (N[i] == 2)
                    cnt++;
            }
            if (cnt >= 2 && l != 2)
                ans = 2;
        }
    }
    else if (sum % 3 == 2)
    {
        for (int i = 0; i < l; i++)
        {
            if (N[i] == 2)
            {
                ans = 1;
                break;
            }
        }
        if (ans == -1)
        {
            int cnt = 0;
            for (int i = 0; i < l; i++)
            {
                if (N[i] == 1)
                    cnt++;
            }
            if (cnt >= 2 && l != 2)
                ans = 2;
        }
    }

    cout << ans << endl;

    return 0;
}
