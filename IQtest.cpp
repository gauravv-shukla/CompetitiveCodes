#include<iostream>
using namespace std;

int main(){
    int i,n,eindex=0,oindex=0,value,ecount=0,ocount=0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>value;
        value=value%2;
        if(value==1){
            ocount=ocount+1;
            oindex=i+1;
            }
        else{
            ecount=ecount+1;
            eindex=i+1;
            }
        }
    if(ocount==1){
        cout<<oindex;
    }
    else{
        cout<<eindex;
    }
    return 0;
}