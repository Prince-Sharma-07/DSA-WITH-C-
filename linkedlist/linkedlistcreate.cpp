#include<iostream>
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

void insert_at_beg(node* &head , int val){

       node* newnode = new node(val);
       
       node* temp = head;
       if (head == NULL){
          head = newnode;
       }
       else{
          newnode->next=head;
          head=newnode;
       }
       cout<<"One node inserted at head: \n";
}

void insert_at_pos(node* &head,int val,int pos){
    if (pos==1){
        insert_at_beg(head,val);
        return;
    }
    else{
        node* newnode = new node(val);
        node* temp = head;
        int current_pos = 1;
        while(current_pos != pos-1){
            temp=temp->next;
            current_pos++;
        }
        newnode->next=temp->next;
        temp->next=newnode;
        cout<<"One node inserted at: "<<pos<<endl;
    }
}

void insert_at_tail(node* &head, int val){
    node* newnode = new node(val);
    if(head==NULL){
        head = newnode;
    }
    else{
        node* temp = head;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->next=newnode;
        cout<<"One node inserted at tail: \n";
    }
}

void update_at_pos(node* &head, int k, int val){
    if(k==1){
        head->data=val;
    }
    else{
         node* temp = head;
         node* newnode = new node(val);
         int current_pos = 1;
         while(current_pos!=k){
            temp=temp->next;
            current_pos++;
         }
         temp->data=val;
    }
         cout<<val<<" Updated successfully!!! at pos: "<<k<<endl;
}
void display(node* head){
    if(head==NULL){
        cout<< "linked list is empty\n";
    }
    else{
        cout<<"your linked list is : ";
        while(head!=NULL){
            cout<<head->data<<"->";
            head=head->next;
        }
        cout<<"NULL"<<endl;
    }
}

int main(){
    node* head = NULL;
    insert_at_beg(head,2);
    insert_at_tail(head,4);
    insert_at_tail(head,5);
    insert_at_pos(head,3,2);
    insert_at_pos(head,1,1);
    update_at_pos(head,2,8);
    display(head);
    
    
    return 0;
}