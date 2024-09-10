#include<bits/stdc++.h>
using namespace std;
void lowertoUp(string &s , int start , int end){
     if(start == end) return;
     if(s[start] >= 'a') s[start] -= 32;
     return lowertoUp(s , start+1 , end);
}
int main(){
    string str;
    cout<<"Enter the string: ";
    cin>>str;
    lowertoUp(str , 0 , str.size());
    cout<<"The string in UpperCase is: "<<str;
}