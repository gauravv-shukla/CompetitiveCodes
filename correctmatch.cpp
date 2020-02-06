#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,q,count,match;
    long int n;
    cin>>q;
    int arr[q];
    for(i=0;i<q;i++){
        cin>>n;
        if(n>3){
            if(n%2==0){
                arr[i]=0;
            }
            else{
                arr[i]=1;
            }
        }
        else{
            arr[i]=4-n;
        }
    }
    for(i=0;i<q;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}