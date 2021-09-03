#include <iostream>
#define N 1000
#define MAX (1 << 21)
using namespace std;

int check(int a[], int index, int n)
{
    int min = MAX;
    for (int i = 0; i < n; i++)
    {
        if (i == index)
            continue;
        if (min > a[i])
            min = a[i];
    }

    return min;
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, a[N], b[N];
        int min_a = MAX, min_b = MAX, a_index, b_index;
        int min_all = MAX, temp;

        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i] >> b[i];
            if (min_a > a[i])
            {
                min_a = a[i];
                a_index = i;
            }
            if (min_b > b[i])
            {
                min_b = b[i];
                b_index = i;
            }
        }
        // cout << min_b << " " << min_a << endl;

        if (a_index == b_index)
        {

            if (min_a > min_b)
            {
                temp = check(a, b_index, n);
                // cout << temp;
                cout << min(min_a + min_b, max(temp, min_b)) << endl;
            }
            else if (min_a < min_b)
            {
                temp = check(b, a_index, n);
                cout << min(min_a + min_b, max(temp, min_a)) << endl;
            }
            else
            {
                int temp_a = check(a, b_index, n);
                int temp_b = check(b, a_index, n);
                // cout << temp_a << " " << temp_b << endl; 
                min_all = min(max(temp_a, min_b), max(temp_b, min_a));
                // cout << min_all << endl;
                min_all = min(min_all, min_a * 2);
                cout << min_all << endl;
            }
        }
        else
        {
            cout << max(min_a, min_b) << endl;
        }
    }
    
}