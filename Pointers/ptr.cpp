#include<bits/stdc++.h>
using namespace std;

void add(int* n){
      *n = *n + 1;
}
int main(){
  int num = 1;
  int* temp = &num;
  add(temp);
  cout<<num<<endl;
}