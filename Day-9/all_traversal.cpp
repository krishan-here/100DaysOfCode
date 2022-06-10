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

void all_traversal(Node* root){
    if(root == NULL)
        return;
    vector<int> pre;
    vector<int> inorder;
    vector<int> post;
    stack<pair<Node*, int>> st;
    st.push({root,1});
    while(!st.empty()){
        pair<Node*,int> curr= st.top();
        st.pop();

        if(curr.second != 3){
            st.push({curr.first, curr.second + 1});
        }
        switch(curr.second){
            case 1: 
                pre.push_back(curr.first->data);
                if(curr.first->left != NULL){
                    st.push({curr.first->left, 1});
                }
                break;
            case 2:
                inorder.push_back(curr.first->data);
                if(curr.first->right != NULL){
                    st.push({curr.first->right, 1});
                }
                break;
            case 3:
                post.push_back(curr.first->data);
        }

    }

    for(auto i: pre)
        cout<<i<<" ";
    cout<<endl;
    
    for(auto i: inorder)
        cout<<i<<" ";
    cout<<endl;

    for(auto i: post)
        cout<<i<<" ";
    cout<<endl;

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
    all_traversal(root);
}