#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(){
        data = 0;
        next = NULL;
    }

    ~node(){
        cout<<"nodeDeleted";
    }

}*head,*temp;

void InsertAtBeg(){
    node* newnode = new node();
    cout<<"Enter your data to insert at beg: "<<endl;
    cin>>newnode->data;
    if(head==NULL){
        head = newnode;
    }
    else {
        newnode->next = head;
        head = newnode;
    }
    cout<<"A node inserted at beg";
}

void insertAtPos(){
    int k = 1,pos,size=0; 
    cout<<"Enter the position: "<<endl;
    cin>>pos;
temp = head;
while(temp!=NULL){
    size++;
    temp = temp -> next;
}
    if(pos==1){
        InsertAtBeg();
    }

    else if(pos>size || pos<1){
        cout<<"Please Enter the position between 0 and "<<size<<endl;
    }

    else{
    temp = head;
    node* newnode = new node();
    cout<<"Enter the data you want to insert: "<<endl;
    cin>>newnode->data; 
    while(k!=pos-1){
      temp = temp->next;
      k++;
    }
    newnode->next = temp->next;
    temp->next = newnode;
    cout<<"Node insert at "<<pos<<endl;
    }

}

void insertAtEnd(){
  temp = head;
  node* newnode = new node();
  cout<<"Enter your data to insert at end: "<<endl;
  cin>>newnode->data;
 if(head == NULL){
  head = newnode;
 }
 else{
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = newnode;
    temp = newnode;
 }
 cout<<"A node inserted at end";
}

void Display(){
    temp = head;
    if(head==NULL){
        cout<<"Linked list is empty!!!"<<endl;
    }
    cout<<"Your Linked List is: "<<endl;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
   int choice=0;
   while(choice!=5){
    cout<<endl<<"Enter your choice"<<endl<<"1.InsertAtBeg"<<endl<<"2.Enter at Position"<<endl<<"3.InsertAtEnd"<<endl<<"4.Display"<<endl<<"5.Exit"<<endl;
    cin>>choice;
    switch(choice){
        case 1: {
            InsertAtBeg();
            break;
        }
        case 2: {
            insertAtPos();
            break;
        }
        case 3: {
            insertAtEnd();
            break;
        }
        case 4: {
            Display();
            break;
        }
        case 5: {
            break;
        }
        default : {
            cout<<"Enter a valid choice!!!"<<endl;
        }
    }
   }
   return 0;
}