#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,i=0;
    cin>>n;
    long a[n],largest=0,count=0;
    while(n>i){
        cin>>a[i];
        if(a[i]>largest){
            largest=a[i];
        }
        i++;
    }
    i=0;
    while(n>i){
        count+=largest-a[i];
        i++;
    }
    cout<<count;
    return 0;
}