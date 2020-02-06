#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,n,acount=0,dcount=0;
    cin>>n;
    char string[n+1];
    cin>>string;
    for(i=0;i<n;i++){
        if(string[i]=='A'){
            acount++;
        }
        else if(string[i]=='D'){
            dcount++;
        }
    }

    if(acount==dcount){
        cout<<"Friendship";
    }
    else if(acount>dcount){
        cout<<"Anton";
    }
    else{
        cout<<"Danik";
    }
    return 0;
}