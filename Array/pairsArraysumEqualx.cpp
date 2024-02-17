#include<iostream>
using namespace std;
int pairs(int ar[], int n, int x){
    int pair=0;
    for(int i=0; i<n; i++){
        for (int j=i+1; j<n; j++){
            if(ar[i]+ar[j]==x){
                pair += 1;
            }
        }
    }
    return pair; 
}
int main()
{ int size;
  cout<<"Enter the size of array"<<endl;
  cin>>size;
  int arr[size];
  cout<<"Enter "<<size<<" elements: "<<endl;
  for(int i=0; i<size; i++){
    cin>>arr[i];
  }
  int sum;
  cout<<"Enter the sum: "<<endl;
  cin>>sum;
  cout<<"Number of pairs in array: "<<pairs(arr,size,sum);
return 0;
}