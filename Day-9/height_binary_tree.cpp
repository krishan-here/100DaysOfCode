#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

struct Node{
    struct Node* left;
    struct Node* right;
    int data;
    Node(int value){
        data= value;
        left = right = NULL;
    }
};

int calculate(Node* root){
    if(root == NULL){
        return 0;
    }
    return 1 + max(calculate(root->left), calculate(root->right));
}

void height(Node* root){
    cout<<calculate(root);
}

int main()
{
    Node* root=new Node(1);
    root->left = new Node(2);
    root->right = new Node(7);
    root->left->left = new Node(5);
    root->left->right = new Node(8);
    root->left->right->left = new Node(6);
    root->left->right->right = new Node(3);
    height(root);
}