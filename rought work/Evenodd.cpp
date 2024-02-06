#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int greatest(int a , int b ,int c, int d ){
    if (a>b && a>c && a>d){
        return a;
    }
    if (b>a && b>c &&b>d){
        return b;
    }
    else if (c>a && c>b && c>d){
        return c;
    }
   return 0;
}

int main() {
    int a,b,c,d;
   cin>>a>>b>>c>>d;
    greatest(a,b,c,d);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
