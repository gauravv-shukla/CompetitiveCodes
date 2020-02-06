#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[3],n,k,i,count=0;
    cin>>n>>k;
    a[0]=n*2;a[1]=n*5;a[2]=n*8;
    for(i=0;i<3;i++){
        if(a[i]%k==0){
            count+=a[i]/k;
        }
        else if(a[i]%k!=0 && a[i]>k){
            count+=a[i]/k+1;
        }
        else if(a[i]<k){
            count+=1;
        }
    }
    cout<<count;
    return 0;
}