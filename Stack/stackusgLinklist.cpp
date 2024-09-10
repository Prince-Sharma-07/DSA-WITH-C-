#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int val){
     data = val;
     next = NULL;
    }
};

class stack{
    node* top;
    int size;
    public:
    stack(){
        top = NULL;
        size = 0;
    }
    void push(int val){
        node* newnode = new node(val);
        newnode->next = top;
        top = newnode;
        size++;
    }
    void pop(){
        node* temp = top;
        top =  top->next;
        cout<<temp->data<<" is popped from stack"<<endl;
        delete temp;
    }
    void display(){
        node* temp = top;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
}obj;

int main(){

 obj.push(10);
 obj.push(20);
 obj.push(30);
 obj.push(40);
 obj.display();
 obj.pop();
 obj.display();

}