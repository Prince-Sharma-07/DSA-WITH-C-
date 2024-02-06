#include<iostream>
using namespace std;
int duplicates(int arr[] , int n){
    int k;
    int i=0;
    for(int j=1; j<n; j++){
    if(arr[i]!=arr[j]){
    arr[i+1]=arr[j];
    i++;
    }
    }
     k=i+1;
     return k;

}
int main(){
    int n;
    cout<<"Enter the size\n";
    cin>>n;
    int arr[n];
    cout<<"ENter the elements\n";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int result = duplicates(arr, n);
    cout<<result;
    return 0;
}