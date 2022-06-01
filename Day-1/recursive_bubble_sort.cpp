#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void bubbleSort(int arr[], int n){
    if(n == 1){
        return;
    }
    for(int i=0;i<n-1;i++){
        if(arr[i+1] < arr[i]){
            swap(arr[i+1], arr[i]);
        }
    }
    bubbleSort(arr, n-1);
}

int main()
{
    int arr[10]= {12, 34, 9, 83, 28, 56, 91, 24, 10, 19};
    int n=10;
    bubbleSort(arr, n);
    for(int i=0;i< n;i++){
        cout<<arr[i]<<" ";
    }

}