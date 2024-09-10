#include<bits/stdc++.h>
using namespace std;
int count(string str, int start , int end , int county){
    if(start == end) return county;
    if(str[start] == 'a' || str[start] == 'e' || str[start] == 'i' || str[start] == 'o' || str[start] == 'u') county++;
    return count(str , start+1 , end , county);
}

int main(){
string str;
cout<<"Enter the string : ";
cin>>str;
cout<<"The no of vowels in the string are : "<<count(str , 0 , str.size() , 0);
return 0;
}