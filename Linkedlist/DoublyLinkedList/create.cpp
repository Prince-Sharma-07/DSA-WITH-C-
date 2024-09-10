#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* prev;
    node(int data){
        this->data = data;
        next = NULL;
        prev = NULL;
    }
};

void createList(node* &head , int data){
    node* newnode = new node(data);
    if(head == NULL){
       head = newnode;
       return;
    }
    node* temp = head;
    while(temp->next!= NULL){
        temp = temp->next;
    }
    temp->next = newnode;
    newnode->prev = temp;
    return;
}

void Display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL";
}
void reverse(node* head){
    node* temp = head;
    while(temp->next!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    while(temp->prev!=NULL){
        cout<<temp->data<<"->";
        temp = temp->prev;
    }
    cout<<NULL;
}
int main(){
    int n;
    cout<<n;
    node* head;
    createList(head , 1);
    createList(head , 2);
    createList(head , 3);
    // Display(head);
    reverse(head);

    return 0;
}