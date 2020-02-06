#include<bits/stdc++.h>
using namespace std;

int table(int,int);

int main(){
    int n,value;
    cin>>n;
    value=table (n,n);
    cout<<value;
    return 0;
}

int table(int m,int n){
    if(m==1 || n==1){
        return 1;
    }
    return table(m-1,n)+table(m,n-1);
}