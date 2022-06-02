#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


void merge_sort(int *arr, int n){
    if(n == 1){
        return;
    }
    int m = n/2;
    int A[m]={0};
    int B[n-m]={0};
    for(int i=0;i<m;i++){
        A[i]=arr[i];
    }
    for(int i=m,j=0;i<n;i++){
        B[j++]=arr[i];
    }
    merge_sort(A, m);
    merge_sort(B, n-m);

    int i=0, j=0, k=0;

    while(i<m && j<n-m){
        if(A[i] < B[j]){
            arr[k]=A[i];
            i++;
        }else{
            arr[k]=B[j];
            j++;
        }
        k++;
    }
    while(i<m){
        arr[k]=A[i];
        i++;k++;
    }
    while(j<n-m){
        arr[k]=B[j];
        j++;k++;
    }
    
}
int main()
{
    int arr[10]= {34, 12, 98, 10, 38, 35, 81, 12, 89, 30};
    merge_sort(arr,10);
    for(int i=0;i<10;i++){
        cout<< arr[i]<< " ";
    }

}