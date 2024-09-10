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

int main(){
int x ,first , second;
cout<<"Enter the root element: ";
cin>>x;

queue<Node*> q;
Node* root = new Node(x);
q.push(root);

//Build the Binary Tree
while(!q.empty()){
    Node* temp = q.front();
    q.pop();

    cout<<"Enter the left child of "<<temp->data<<" : ";
    cin>>first; // left child value
    if(first != -1){
    temp->left = new Node(first);
    q.push(temp->left);
    }

    cout<<"Enter the right child of "<<temp->data<<" : ";
    cin>>second; //right child value
    if(second != -1){
        temp->right = new Node(second);
        q.push(temp->right);
    }
}
}