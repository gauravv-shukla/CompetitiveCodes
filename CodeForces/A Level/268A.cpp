#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,count=0,i,j;
    cin>>n;
    int h[n],a[n];
    cin>>h[0]>>a[0];
    for(i=1;i<n;i++){
        cin>>h[i]>>a[i];
        j=i-1;
        while(j>=0){
            if(h[i]==a[j]){
                count++;
            }
            if(a[i]==h[j]){
                count++;
            }
            j--;
        }
    }
    cout<<count;
    return 0;
}