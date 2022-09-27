#include<iostream>
using namespace std;
struct node{
    int key;
node *right;
node *left;
node(int x){
    key = x;
    right = left = NULL;
}
};
void inorder(node *root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout<<root->key<<" ->";
    inorder(root->right);
}
void pre_order(node *root){
    if(root == NULL){
        return;
    }
    cout<<root->key<<"->";
    pre_order(root->left);
    pre_order(root->right);
}
void postorder(node *root)
{
    if (root == NULL)
        return;

    postorder(root->left);
    postorder(root->right);
    cout << root->key << " ->";
}





int main(){

node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->right->right = new node(8);
    root->left->right = new node(40);
    root->left->left->left = new node(9);
    root->right->right->left = new node(77);
postorder(root);



    return 0;
}
