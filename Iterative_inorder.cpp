#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node* left,*right;
    node(int value)
    {
        data=value;
        left=right=NULL;
    }
};
//LEFT ROOT RIGHT

void inorder(node* root)
{
    stack<node*>st;
    node* temp=root;
    while(true)
    {
        if(temp)
        {
            st.push(temp);
            temp=temp->left;
        }
        else{
            if(st.empty()) break; 
            temp=st.top();
            cout<<temp->data<<" ";
            st.pop();
            temp=temp->right;
        }
    }
    
    
}
int main()
{
    node* root=new node(0);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(7);
    root->left->right = new node(8);
    root->right->right = new node(15);
    root->right->left = new node(12);
    root->right->right->left = new node(14);
    inorder(root);
    return 0;
}