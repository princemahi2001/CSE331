#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *left,*right; 
    Node(int v)
    {
        data=v;
        left=right=NULL;
    }
};

void inorder(struct Node* node)
{
    if(node==NULL) return;
    inorder(node->left);
    cout<<node->data<<" ";
    inorder(node->right);
}

void preorder(struct Node* node)
{
    if(node==NULL) return;
    cout<<node->data<<" ";
    preorder(node->left);
    preorder(node->right);
}

void postorder(struct Node* node)
{
    if(node==NULL) return;
    preorder(node->left);
    preorder(node->right);
    cout<<node->data<<" ";
}

int main()
{
    struct Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    cout<<"inorder: ";
    inorder(root);
    
    cout<<endl<<"preorder: ";
    preorder(root);
    
    cout<<endl<<"postorder: ";
    postorder(root);
}

