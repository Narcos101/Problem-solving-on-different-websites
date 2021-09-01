#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int fx = 0, fy = 0, x = 0, y = 0, avl = 0;
        char a[3][3];
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                char temp;
                cin >> a[i][j];

                temp = a[i][j];
                if (temp == 'X')
                {
                    x++;
                }
                else if (temp == 'O')
                {
                    y++;
                }
                else if (temp == '_')
                {
                    avl++;
                }
            }
        }

        if (a[0][0] == 'X' && a[0][1] == 'X' && a[0][2] == 'X')
        {
            fx++;
        }
        if (a[1][0] == 'X' && a[1][1] == 'X' && a[1][2] == 'X')
        {
            fx++;
        }
        if (a[2][0] == 'X' && a[2][1] == 'X' && a[2][2] == 'X')
        {
            fx++;
        }
        if (a[0][0] == 'X' && a[1][0] == 'X' && a[2][0] == 'X')
        {
            fx++;
        }
        if (a[0][1] == 'X' && a[1][1] == 'X' && a[2][1] == 'X')
        {
            fx++;
        } // error is in this line
        if (a[0][2] == 'X' && a[1][2] == 'X' && a[2][2] == 'X')
        {
            fx++;
        }
        if (a[0][0] == 'X' && a[1][1] == 'X' && a[2][2] == 'X')
        {
            fx++;
        }
        if (a[2][0] == 'X' && a[1][1] == 'X' && a[0][2] == 'X')
        {
            fx++;
        }

        if (a[0][0] == 'O' && a[0][1] == 'O' && a[0][2] == 'O')
        {
            fy++;
        }
        if (a[1][0] == 'O' && a[1][1] == 'O' && a[1][2] == 'O')
        {
            fy++;
        }
        if (a[2][0] == 'O' && a[2][1] == 'O' && a[2][2] == 'O')
        {
            fy++;
        }
        if (a[0][0] == 'O' && a[1][0] == 'O' && a[2][0] == 'O')
        {
            fy++;
        }
        if (a[0][1] == 'O' && a[1][1] == 'O' && a[2][1] == 'O')
        {
            fy++;
        } // error is in this line
        if (a[0][2] == 'O' && a[1][2] == 'O' && a[2][2] == 'O')
        {
            fy++;
        }
        if (a[0][0] == 'O' && a[1][1] == 'O' && a[2][2] == 'O')
        {
            fy++;
        }
        if (a[2][0] == 'O' && a[1][1] == 'O' && a[0][2] == 'O')
        {
            fy++;
        }
        // cout << fx << " " << fy << endl;
        // cout << x << " " << y << " " << avl << endl;
        if ((fy == 1 && fx == 1) || (y > x) || (x - y > 1))
            cout << "3"
                 << "\n";

        else if (fy == 1 && fx == 0 && y == x)
            cout << "1"
                 << "\n";
        else if (fx == 1 && fy == 0 && y < x)
            cout << "1"
                 << "\n";
        else if (fx == 2 && avl == 0)
            cout << "1"
                 << "\n";
        else if ((fx + fy == 0) && avl == 0)
            cout << "1"
                 << "\n";
        else if ((fx + fy == 0) && avl > 0)
            cout << "2"
                 << "\n";
        else
            cout << "3"
                 << "\n";
    }
    return 0;
}