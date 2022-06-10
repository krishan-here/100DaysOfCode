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

int calculateHeight(Node* root){
    if(root == NULL){
        return 0;
    }
    return 1 + max(calculateHeight(root->left), calculateHeight(root->right));
}

bool check(Node* root){
    int leftHeight = calculateHeight(root->left);
    int rightHeight = calculateHeight(root->right);

    if(abs(rightHeight - leftHeight) > 1)
        return false;
    
    bool left = check(root->left);
    bool right = check(root->right);

    if(!left || !right)
        return false;

    return true;
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
    cout<<check(root);
}