#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n=9;
    int arr[n]={-2, 1, -3, 4, -1, 2, 1, -5, 4};

    int max_sum=INT_MIN;
    int local_sum=0;
    for(int i=0;i<n;i++){
        if(local_sum < 0){
            local_sum = 0;
        }
        local_sum+= arr[i];
        max_sum = max(max_sum, local_sum);
    }
    cout<<max_sum;
}