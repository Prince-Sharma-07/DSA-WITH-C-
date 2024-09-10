#include<bits/stdc++.h>
using namespace std;
int main(){
    int row = 4 , col = 4 , sum = 0;
    int arr[row][col] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}}; /* 1  2  3  4 
                                                                             5  6  7  8
                                                                             9 10 11 12                      
                                                                            13 14 15 16 */
    for(int i = 0 ; i<row; i++){                                  
        sum += arr[i][i];
    }
    int i = 0 , j = col-1;
    while(j>=0){
        sum += arr[i++][j--];
    }
    cout<<"The sum of its diagonals is : "<<sum<<endl;
    return 0;
}