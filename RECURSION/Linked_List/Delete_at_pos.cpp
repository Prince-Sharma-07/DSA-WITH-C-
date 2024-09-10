#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
      this->data = data;
      this->next = NULL;
    }
};
void createList(Node* &head , int data){
     Node* newnode = new Node(data);
     if(head == NULL){
       head = newnode;
     } 
     else{
        Node* temp = head;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->next = newnode;
     } 
}

void delete_at_pos(int x , Node* curr){
   if(x==1){
     Node* temp = curr->next;
     delete(temp);
   }
   prev = temp;
   return delete_at_pos(x-- , temp->next , prev);
}

void display(Node* &head){
    Node* temp = head;
    while(temp->next != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
   Node* head = NULL;
   int n;
   cout<<"Enter size: ";
   cin>>n;
   while(n--){
    int data;
    cin>>data;
    createList(head , data);
   }
   display(head);
   int x;
   cout<<"enter pos:"<<endl;
   cin>>x;
   Node* temp = head , *prev = NULL;
   delete_at_pos(x , temp , prev);
   display(head);
}