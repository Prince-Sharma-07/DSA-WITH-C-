#include<bits/stdc++.h>
using namespace std;
void reverse(string &str ,int start, int end){
    if(start >= end) return;
    swap(str[start] , str[end]);
    return  reverse(str ,start+1,end-1);
}
int main(){
  string str;
  cout<<"Enter a string: ";
  cin>>str;
  reverse(str , 0 , str.size()-1);
  cout<<"The reverse of string is : "<<str;
  return 0;
}