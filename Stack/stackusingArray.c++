#include<bits/stdc++.h>
using namespace std;

class Stack{
    int* arr;
    int size;
    int top;
public:
    Stack(int s){
        size = s;
        top = -1;
        arr = new int[s];
    }
void Push(){
if(top==size-1){
    cout<<"Stack overflow"<<endl;
    return; 
}
else{
cout<<"Enter a number: "<<endl;
top++;
cin>>arr[top];
}
}
void Pop(){
    if(top==-1){
        cout<<"Stack Underflow"<<endl;
        return;
    }
    else{
int no = arr[top];
top--;
cout<<no<<" is popped"<<endl;
    }
}

void Display(){
    int temp = top;
while(temp!=-1){
    cout<<arr[temp--]<<" ";
}
cout<<endl;
}
};
int main(){
    int n;
    cout<<"Enter the size of Stack:"<<endl;
    cin>>n;
    Stack st(n);
    int choice=0;
  while (choice != 4){
    cout<<"Select an operation"<<endl<<"1.Push"<<endl<<"2.Pop"<<endl<<"3.Display"<<endl<<"4.Exit"<<endl;
    cin>>choice;
    switch (choice)
    {
    case 1:{
        st.Push();
        break;
    }
    case 2:{
        st.Pop();
       break;
    }
    case 3:{
     st.Display();
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