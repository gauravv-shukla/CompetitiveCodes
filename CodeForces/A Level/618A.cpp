#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,arr[100],i,sum,product,count;
    cin>>t;
    while(t--){
        sum=0;product=0;count=0;
        cin>>n;
        for(i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==0){
                arr[i]++;
                count++;
            }
            sum+=arr[i];
            product*=arr[i];
        }
        if(sum==0){
            count++;
            arr[0]++;
        }
        cout<<count<<endl;
    }
    return 0;
}