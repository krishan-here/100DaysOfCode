#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int arr[10]= {12, 34, 9, 83, 28, 56, 91, 24, 10, 19};

    // bubble sort

    for(int i=0;i<10;i++){
        for(int j=1;j<10;j++){
            if(arr[j-1] > arr[j]){
                int temp = arr[j-1];
                arr[j-1]= arr[j];
                arr[j]= temp;
            }
        }
    }

    for(int i=0;i<10; i++){
        cout<< arr[i]<<" ";
    }
}