#include<bits/stdc++.h>
using namespace std;
#define MAX 100
int top = -1;  
int stack[MAX];

void Push();
void Pop();
void Display();

void push(){
cout<<"Enter a number: "<<endl;
if(top == -1){
    top++;
}
cin>>stack[top];
top++;
}

void Pop(){
int no = stack[top];
top--;
cout<<no +" is popped"<<endl;
}

void Display(){
while(top!=0){
    cout<<stack[top--];
}
}
int main(){

    int choice=0;
  while (choice != 4){
    cout<<"Select an operation"<<endl<<"1.Push"<<endl<<"2.Pop"<<endl<<"3.Display"<<endl<<"4.Exit";
    cin>>choice;
    switch (choice)
    {
    case 1:{
        Push();
        break;
    }
    case 2:{
        Pop();
       break;
    }
    case 3:{
     Display();
     break;
    }
    case 4:{
        break;
    }
    default:
    cout<<"Enter a valid choice"<<endl;
        break;
    }
  }
}