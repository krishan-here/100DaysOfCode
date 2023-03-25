#include<iostream>
using namespace std;


int main(){
    int list[6] = {4, 9, 1, 9, 8, 10};

    int val = 12;

    cout<<val<<endl;
    cout<<&list[1]<<endl;
    int second_address = *(list + 1);
    cout<<second_address<<endl;
}
