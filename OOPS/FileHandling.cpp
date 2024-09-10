#include<bits/stdc++.h>
using namespace std;
int main(){
    try{
    int *arr = new int[10000000000000];
    cout<<"Memory allocated successfully!!";
    delete []arr; //used to deallocate the entire array;
    }
    catch(const exception &e){         //used to catch the thown errors
           cout<<"Exception Occured at line 9: "<<e.what()<<endl;
    }
}