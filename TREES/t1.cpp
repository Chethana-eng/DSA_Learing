#include <iostream>
using namespace std;
class node{
public:
    int data;
    node*right;
    node*left;

    node(int value){
        data = value;
        right=left=nullptr;
    }
};
void inorder(node*root){ //left,root,right
    if(root==nullptr){
        return;
    }
    else{
        inorder(root->left);
        cout<<root->data<<endl;
        inorder(root->right);
    }
}

void preorder(node*root){ //root,left,right
    if(root==nullptr){
        return;
    }
    else{
        cout<<root->data<<endl;
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(node*root){
    if(root==nullptr){
        return;
    }
    else{
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<endl;
    }
}

int main(){
    node*root = new node(5);
    root->left = new node(2);
    root->right = new node(6);
    cout<<"Inorder Traversal : "<<endl;
    inorder(root);
    cout<<"Preorder Traversal : "<<endl;
    preorder(root);
    cout<<"Postorder Traversal : "<<endl;
    postorder(root);
    return 0;
}