#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int rows;
    cout << "Enter the number of rows : ";
    cin >> rows;
    cout << endl;
    vector<vector<int>>v;
    for (int i = 0; i < rows; i++)
    {
        int val = 1;
        for (int k = 0; k <= i; k++)
        {
            v[i].push_back(val);
            val = val * (i - k) / (k + 1);
        }
    }
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < v[i].size(); j++){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
