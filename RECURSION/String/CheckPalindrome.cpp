#include<bits/stdc++.h>
using namespace std;
bool check(string str ,  int start , int end){
    if(start>=end) return 1;
    if(str[start]!=str[end]) return 0;
    return check(str , start+1 , end-1);
}
int main(){
   string str;
   cout<<"Enter the string : "<<endl;
   cin>>str;
   if(check(str , 0 , str.size()-1)) cout<<"The string is a palindrome :"<<endl;
   else cout<<"The string is not a palindrome: "<<endl;
}
