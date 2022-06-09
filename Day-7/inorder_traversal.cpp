#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};



// Inorder traversal ---------- left  root  right
void inOrder(Node* root){
    if(root == NULL){
        return;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

void inOrder2(Node* root){
    stack<Node*> st;
    st.push(root);
    Node* curr = root;
    while(!st.empty() || curr != NULL){
        if(curr != NULL){
            st.push(curr);
            curr=curr->left;
        }else{
            curr= st.top();
            st.pop();
            cout<<curr->data<<" ";
            curr = curr->right;
        }
    }
}

int main()
{
    Node* root = new Node(10);
    root->left = new Node(15);
    root->right = new Node(8);
    root->left->left = new Node(2);
    root->right->left = new Node(16);
    root->left->right = new Node(4);
    root->left->right->left = new Node(8);
    inOrder2(root);

}