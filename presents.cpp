#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,i;
    cin>>n;
    int arr[n+1];    
    for(i=1;i<=n;i++){
        cin>>arr[i];
    }    
    if(n<4){
        for(i=1;i<=n;i++){
            if(i==n){
            cout<<arr[i];
            }
            else{
                cout<<arr[i]<<" ";
            }
        }
    }    
    else{
        for(i=((n+1)/2)+1;i<=n;i++){
                cout<<arr[i]<<" ";
            }
        for(i=1;i<=n/2;i++){
            if(i==n/2){
                cout<<arr[i];
            }
            else{
                cout<<arr[i]<<" ";
            }
        }
    }
    return 0;
}