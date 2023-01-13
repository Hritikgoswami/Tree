#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node* left;
    struct node* right;
    node(int value)
    {
        data = value;
        left=right=NULL;
    } 
};
//LEFT RIGHT ROOT

void postorder(node* root)
{
    if(!root)
        return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";

}

int main()
{
    node* root=new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(7);
    root->left->right = new node(8);
    root->right->right = new node(15);
    root->right->left = new node(12);
    root->right->right->left = new node(14);
    postorder(root);
    return 0;
}