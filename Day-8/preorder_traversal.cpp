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

void preorder(Node* root){
    // iterative approach 

    if(root == NULL)
        return;
    stack<Node*> st;
    st.push(root);
    while(!st.empty()){
        Node* curr = st.top();
        st.pop();
        if(curr->right != NULL){
            st.push(curr->right);
        }
        if(curr->left != NULL){
            st.push(curr->left);
        }
        cout<<curr->data<<" ";
    }
}

void preorder2(Node* root){
    // recursive approach

    if(root == NULL)
        return;
    cout<<root->data<<" ";
    preorder2(root->left);
    preorder2(root->right);
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
    preorder(root);
    cout<<"\n";
    preorder2(root);
}