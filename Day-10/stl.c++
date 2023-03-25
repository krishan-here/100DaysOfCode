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
        // create new array haing size one more then current array
        int *temp_arr = new int[length + 1];

        // copy current array value to a new array(temp_arr)
        for(int i = 0; i< length; i++){
            temp_arr[i] = arr[i];
        }


        // insert new value to a new array(temp_arr)
        temp_arr[length] = val;

        // change the address of current array to new array
        arr = temp_arr;

        // increase length by 1
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