#include<bits/stdc++.h>
using namespace std;

class Node{
public:
  int data;
  Node* left;
  Node* right;
  Node(int data){
    this->data = data;
    left = NULL;
    right = NULL;
  }
};

void Preorder(Node* root){

  if(root == NULL){
    return;
  }

  cout<<root->data<<" ";
  Preorder(root->left);
  Preorder(root->right);

}

void Inorder(Node* root){
   if(root == NULL){
    return;
   }

   Inorder(root->left);
   cout<<root->data<<" ";
   Inorder(root->right);

}

void Postorder(Node* root){
  if(root == NULL){
    return;
  }

  Postorder(root->left);
  Postorder(root->right);
  cout<<root->data<<" ";

}
Node* createBinaryTree(){
   int x;
   cin>>x;
   if(x == -1){
    return NULL;
   }

   Node* temp = new Node(x);

   cout<<"Enter the left child of "<<x<<" : ";
   temp->left = createBinaryTree();

   cout<<"Enter the right child of "<<x<<" : ";
   temp->right = createBinaryTree();

   return temp;
}

int main(){
    Node* root;
    cout<<"Enter the root: ";
    root = createBinaryTree();

    cout<<"Preorder: ";
    Preorder(root);  //Node Left Right
    cout<<endl<<"Inorder: ";
    Inorder(root);   //Left Node Right
    cout<<endl<<"Postorder: ";
    Postorder(root);  //L R N
    
    return 0;
}