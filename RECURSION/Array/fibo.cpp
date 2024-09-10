#include<bits/stdc++.h>
using namespace std;
int fibonacci(int a , int b , int n){
  if(n==1){
    return b;
  }
  return fibonacci(b , a+b , n-1);
}
int main(){
    int n;
    cout<<"Enter Nth : ";
    cin>>n;
    cout<<n<<"th fibo is : "<<fibonacci(0 , 1 , n)<<endl;
    return 0;
}