#include <bits/stdc++.h>
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

// level order traversal
vector<int> levelOrder(Node *node)
{
    // Your code here
    vector<int> res;
    queue<Node *> tree;
    tree.push(node);
    while (tree.empty() == false)
    {
        Node* curr = tree.front();
        res.push_back(curr->data);
        if (curr->left != NULL)
            tree.push(curr->left);
        if (curr->right != NULL)
            tree.push(curr->right);
        tree.pop();
    }
    return res;
}

int main()
{
}