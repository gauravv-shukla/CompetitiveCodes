#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,hcount=0,n,value;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>value;
        if(value==1){
            hcount++;
        }
    }
    if(hcount!=0){
        cout<<"HARD";
    }
    else{
        cout<<"EASY";
    }
    return 0;
}