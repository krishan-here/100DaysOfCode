#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int quick(int *arr, int start, int end){
    int left = start, right=end, loc=start;
    while(left<right){
        while(arr[loc] <= arr[right] && left<right){
            right--;
        }
        swap(arr[loc], arr[right]);
        loc=right;
        while(arr[left] <= arr[loc] && left<right){
            left++;
        }
        swap(arr[loc], arr[left]);
        loc=left;
    }
    return loc;
}

void quick_sort(int *arr, int beg, int end){
    if(beg >= end)
        return;
    int loc = quick(arr, beg, end);
    quick_sort(arr, beg, loc);
    quick_sort(arr, loc+1, end);
}

int main()
{
    int n=10;
    int arr[n]={38, 10, 8, 57, 24, 8, 14, 73, 34, 52};
    quick_sort(arr, 0, n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<< " ";
    }
}