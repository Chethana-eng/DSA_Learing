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

int main(){
    node*root = new node(5);
    root->left = new node(2);
    root->right = new node(6);
    cout<<"root is : "<<root->data<<endl;
    cout<<"root->left : "<<root->left->data<<endl;
    cout<<"root->right : "<<root->right->data<<endl;
}