#include<iostream>
using namespace std;

int preProcess(int matrix[n]][m],int aux[n][m]){
    for(int i = 0; i < m;i++){
        aux[0][i] = matrix[0][i];
    }
    for(int i = 1; i < n; i++){
        for(int j = 0; j < m; j++){
            aux[i][j] = matrix[i][j] + aux[i-1][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 1;j < m; j++){
            aux[i][j] += aux[i][j-1];
        }
    }
}

int SumQuery(int aux[n][m],int tli,int tlj,int rbi,int rbj){
    int res = 0;
    res = aux[rbi][rbj];
    if(tli > 0){
        res = res - aux[tli-1][rbj];
    }
    if(tlj > 0){
        res = res - aux[rbi][tlj-1];
    }
    if(tli > 0 && tlj > 0){
        res = res + aux[tli-1][tlj-1];
    }
    return res;
}



int main(){
    int n,m,k;
    cin >> n >> m >> k;
    int matrix[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m;j ++){
            cin >> matrix[i][j];
        }
    }
    int aux[n][m];
    preProcess(matrix,aux);
    int t;
    int tli,tlj,rbi,rbj;
    cin >> t;
    while(t--){
        cin >> tli >> tlj >> rbi >> rbj;
        cout << "Your answer is: " << SumQuery(aux,tli,tlj,rbi,rbj) << endl;
    } 
}