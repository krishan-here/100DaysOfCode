#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int arr[10]= {12, 34, 9, 83, 28, 56, 91, 24, 10, 19};
    int n=10;

    // bubble sort
    for(int i=0;i<n;i++){
        for(int j=1;j<n;j++){
            if(arr[j-1] > arr[j]){
                int temp = arr[j-1];
                arr[j-1]= arr[j];
                arr[j]= temp;
            }
        }
    }

    for(int i=0;i<n; i++){
        cout<< arr[i]<<" ";
    }
    cout<<endl;

    // selection sort
    // divide array into two subarray - 1. sorted one 2. unsorted one
    // iterate unsorted part and find the smallest value and swap it with unsorted first position

    for(int i=0;i<n;i++){
        int min_index = i;
        for(int j=i;j<n;j++){
            if(arr[min_index] > arr[j]){
                min_index = j;
            }
        }
        int temp = arr[min_index];
        arr[min_index] = arr[i];
        arr[i] = temp;
    }

    for(int i=0;i<n; i++){
        cout<< arr[i]<<" ";
    }
    cout<<endl;


    // insertion sort
    // divide array into two subarray - 1. sorted one 2. unsorted one
    // place element of unsorted array to correct position in sorted array

    for(int i=1;i<n;i++){
        int temp = arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1] = temp;
    }

    for(int i=0;i<n; i++){
        cout<< arr[i]<<" ";
    }
    cout<<endl;
}