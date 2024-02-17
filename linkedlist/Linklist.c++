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

void insertAtBeg(){
    node* newnode = new node();
    cout<<"Enter your data to insert at Beg: "<<endl;
    cin>>newnode->data;
    if(head==NULL){
        head = newnode;
    }
    else {
        newnode->next = head;
        head = newnode;
    }
    cout<<"A node is inserted at Beg!";
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
        insertAtBeg();
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
    cout<<"A Node is inserted at "<<pos<<endl;
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
 cout<<"A node is inserted at end!";
}

void deleteAtBeg(){
    if(head == NULL){
        cout<<"Linked list is empty"<<endl;
        return;
    }
    else{
        temp = head;
        head = head->next;
    }
    cout<<temp->data<<" is deleted!"<<endl;
    delete(temp);
}

void deleteAtPos(){
    int current_pos = 1;
    int pos;
    if(head == NULL){
        cout<<"Linked list is empty:"<<endl;
    }
    else{
        cout<<"Enter the position: "<<endl;
        cin>>pos;
        temp = head;
        while(current_pos != pos-1){
            temp = temp->next;
        }
    }
}

void deleteAtEnd(){
   if(head == NULL){
    cout<<"Linked list is empty"<<endl;
    return;
   }
   else if(head->next == NULL){
    deleteAtBeg();
    return;
   }
   else{
    temp = head;
    while(temp->next->next!=NULL){
        temp = temp->next;
    }
    cout<<temp->next->data<<" is deleted"<<endl;
    delete(temp->next->next);
    temp->next =NULL;
   }
}

void Display(){
    temp = head;
    if(head==NULL){
        cout<<"Linked list is empty!!!"<<endl;
        return;
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
   while(choice!=8){
    cout<<endl<<"Enter your choice"<<endl<<"1.InsertAtBeg"<<endl<<"2.InsertAtPosition"<<endl<<"3.InsertAtEnd"<<endl<<"4.DeleteAtBeg"<<endl<<"5.DeleteAtPos"<<endl<<"6.DeleteAtEnd"<<endl<<"7.Display"<<endl<<"8.Exit"<<endl;
    cin>>choice;
    switch(choice){
        case 1: {
            insertAtBeg();
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
            deleteAtBeg();
            break;
        }
        case 5: {
            deleteAtPos();
            break;
        }
        case 6: {
            deleteAtEnd();
            break;
        }
        case 7: {
            Display();
            break;
        }
        case 8: {
            break;
        }
        default : {
            cout<<"Enter a valid choice!!!"<<endl;
        }
    }
   }
   return 0;
}