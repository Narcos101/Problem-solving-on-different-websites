
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int M, N, k;
        cin >> M >> N >> k;
        int mat[M][N];
        for (int i = 0; i < M; i++)
        {
            for (int j = 0; j < N; j++)
            {
                cin >> mat[i][j];
            }
        }
        int aux[M][N];

        for (int i = 0; i < N; i++)
            aux[0][i] = mat[0][i];

        // Do column wise sum
        for (int i = 1; i < M; i++)
            for (int j = 0; j < N; j++)
                aux[i][j] = mat[i][j] + aux[i - 1][j];

        // Do row wise sum
        for (int i = 0; i < M; i++)
            for (int j = 1; j < N; j++)
                aux[i][j] += aux[i][j - 1];

        int tli, tlj, rbi, rbj;
        int res = 0;
        int count = 0;
        for(int i = 0 ; i < M;i++){
            tli = i;
            for(int j = 0 ; j < N; i++){
                tlj = j;
                for(int k = 1 ; k < N*M; k++){
                    rbi = i+k;
                    rbj = j+k;
                    int l = 2;
                    res = aux[rbi][rbj];
                    if (tli > 0)
                        res = res - aux[tli - 1][rbj];

                    if (tlj > 0)
                        res = res - aux[rbi][tlj - 1];

                    if (tli > 0 && tlj > 0)
                        res = res + aux[tli - 1][tlj - 1];

                    if(res / l >= k) {
                        count ++;    
                    }
                    l+=2;
                }
            }
        }
        cout << count << endl;
    }
}
