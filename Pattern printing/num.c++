#include<iostream>
using namespace std;
int main(){
    cout << "Enter the value of n: ";
    int n; 
    cin >> n;
    int i=1;
    while(i<=n){
        int j=1;
          while(j<=n){
            cout<<n-j+1;
            cout<<" ";
            j++;
          }
          cout<<endl;
          i++;
    }

}