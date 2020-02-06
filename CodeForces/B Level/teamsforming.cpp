#include<bits/stdc++.h>
using namespace std;

//1092B
void inssort(int *,int );

int main(){
    int n,i,count=0;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    inssort(arr,n);
    for(i=0;i<n;i+=2){
        count+=(arr[i+1]-arr[i]);
    }
    cout<<count;    
    return 0;
}

void inssort(int *arr,int n){
    int i,pos,j;
    for(i=0;i<n;i++){
        pos=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>pos){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=pos;
    }
    return;
}