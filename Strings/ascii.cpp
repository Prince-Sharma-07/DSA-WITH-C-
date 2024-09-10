#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v1(26,0);
  string sentence = "thequickbrownfoxjumpsoverthelazydog";
  for(int i = 0 ; i<sentence.size(); i++){
      v1[sentence[i] - 'a']++;
  }
   for(auto i : v1){
    if(i==0) return false;
   }
  return true;
}