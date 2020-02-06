#include<bits/stdc++.h>
using namespace std;

int main(){
    int w,n,k;
    cin>>k>>n>>w;
    k=k*(w*(w+1))/2;
    n=k-n;
    if(n>0){
    cout<<n;
    }
    else{
        cout<<0;
    }
    return 0;
}