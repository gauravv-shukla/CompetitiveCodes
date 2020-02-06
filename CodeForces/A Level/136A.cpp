#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,i=0,value;
    cin>>n;
    int a[n+1];
    for(i=1;i<=n;i++){
        cin>>value;
        a[value]=i;
    }
    i=1;
    while(n>=i){
        cout<<a[i]<<" ";
        i++;
    }
    return 0;
}