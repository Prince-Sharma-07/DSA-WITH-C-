#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    public:
    Node(int data){
      this->data = data;
      this->next = NULL;
    }
};
Node* CreateLinkedList(int arr[] , int index , int size){
    if(index == size) return NULL;
    Node *temp = new Node(arr[index]);
    temp->next = CreateLinkedList(arr,index+1,size);
    return temp;
}
Node* InsertAtBeg(int arr[], int index , int size , Node* prev){
    if(index == size){
        return prev;
    }
    Node* temp = new temp(arr[index]);
    temp->next = prev;
    return InsertAtBeg(arr , index+1 , size , temp);
}

void Display(Node* head){
    Node* temp = head;
    while(temp!=NULL){
    cout<<temp->data<<"->";
    temp = temp->next;
    }
    cout<<"NULL";
}
int main(){
   int arr[] = {1,2,3,4,5};
   Node * head = CreateLinkedList(arr , 0 , 5);
   cout<<"The Linked List is: ";
   Display(head);
   return 0;
}