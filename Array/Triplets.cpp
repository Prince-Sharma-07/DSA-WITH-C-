#include<iostream>
using namespace std;
int triplets(int brr[], int n, int x){
    int pairs = 0;
   for(int i=0; i<n; i++){
    for (int j= i+1; j<n; j++){
        for (int k=j+1; k<n; k++){
            if(brr[i]+brr[j]+brr[k]==x){
                pairs += 1;
            }
        }
    }
   }
   return pairs;
}
int main(){
 int size;
 cout<<"Enter the size of array: "<<endl;
 cin>>size;
 int arr[size];
 cout<<"Enter "<<size<<" elements in array: "<<endl;
 for(int i=0; i<size; i++){
    cin>>arr[i];
 }
 int sum;
 cout<<"Enter the sum of triplets: "<<endl;
 cin>>sum;
 cout<<"The number of pairs: "<<triplets(arr,size,sum);
 return 0;
}