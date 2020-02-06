#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,l,count=0,k,i;
    cin>>n;
    int r[n];
    for(i=0;i<n;i++){   cin>>l>>r[i];  }
    cin>>k;
    i=0;
    while(k>r[i]){
        count++;
        i++;
    }
    cout<<n-count;
    return 0;
}