#include<iostream>
using namespace std;


// vector - dynamic array - having dynamic size

class Vector{
    public:
    int *arr = NULL;   
    int length = 0; 

    Vector(){
        arr = new int();
    }

    void push_back(int val){
        int *temp_arr = new int[length + 1];
        for(int i = 0; i< length; i++){
            temp_arr[i] = arr[i];
        }
        temp_arr[length] = val;

        arr = temp_arr;
        length += 1;

    }

    void print(){
        for(int i=0 ;i<length; i++){
            cout<< arr[i]<< " ";
        }
        cout<<endl;
    }

};

int main(){
    Vector arr;
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(50);
    arr.print();
}