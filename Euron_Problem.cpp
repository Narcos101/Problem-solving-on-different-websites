#include<bits/stdc++.h>
using namespace std;

long long int merge(int *A,int *left,int leftcount,int *right,int rightcount){
    int i = 0,j=0,k=0;
    long long int count = 0;
    while(i < leftcount && j < rightcount){
        if(left[i] <= right[j]){
            A[k] = left[i];
            i++;
            k++;
        }
        else{
            A[k] = right[j];
            j++;
            count += leftcount-i;
            k++;
        }
    }
    while(i < leftcount){
        A[k] = left[i];
        k++;
        i++;
    }
    while(j < rightcount){
        A[k] = right[j];
        j++;
        k++;
    }
    return count;
}


long long int mergeSort(int *A,int n){
    if(n < 2){
        return 0;
    }
    long long int ans = 0;
    int mid = (n/2);
    int *left,*right;
    left = (int*)malloc(mid*sizeof(int));
    right = (int*)malloc((n-mid)*sizeof(int));
    for(int i = 0; i < mid;i++){
        left[i] = A[i];
    }
    for(int i = mid; i < n;i++){
        right[i-mid] = A[i];
    }
    ans += mergeSort(left,mid);
    ans += mergeSort(right,(n-mid));
    ans += merge(A,left,mid,right,(n-mid));
    free(left);
    free(right);
    return ans;
}






int main(){
    int n;
    cin >> n;
    int A[n];
    for(int i = 0 ; i < n;i++){
        cin >> A[i];
    }
    cout << mergeSort(A,n) << endl;
}