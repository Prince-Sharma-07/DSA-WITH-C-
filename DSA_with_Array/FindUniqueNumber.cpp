#include<iostream>
using namespace std;
int uniqueElement(int brr[],int n){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(brr[i]==brr[j]){
                brr[i]=brr[j]=-1;
            }
        }
    }
    int unique=0;
    for (int i=0; i<n; i++){
        if(brr[i]>0){
         unique = brr[i];
        }
    }
 return unique;
}
int main()
{
    int size;
    cout<<"Enter the size of array: "<<endl;
    cin>>size;
    int arr[size];
    cout<<"enter the elements of array: "<<endl;
    for (int i=0; i<size; i++){
        cin>>arr[i];
    }
    cout<<"The unique elements is: "<<uniqueElement(arr,size);
    return 0;
}
