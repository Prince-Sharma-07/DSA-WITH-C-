#include<iostream>
using namespace std; 
int main(){

    int arr[5] = {7,2,3,4,5};
    int lowest = arr[0];

    for (int j=0; j<5; j++){
        if(arr[j]<lowest){
             lowest = arr[j];
        }
    }
    cout<<lowest;
    return 0;

}