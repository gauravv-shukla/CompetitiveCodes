#include<bits/stdc++.h>
using namespace std;

int main(){
    int zcount=0,ocount=0,z=0;
    long int i,n;
    cin>>n;
    char string[n+1];
    cin>>string;
    for(i=0;i<n;i++){
        if(string[i]=='n'){
            ocount++;
        }
        else if(string[i]=='z'){
            zcount++;
        }
    }
        while(zcount+ocount>0){
            if(ocount==0){
                if(zcount==1){
                cout<<"0";
                zcount--;
                }
                else{
                    cout<<"0 ";
                    zcount--;
                }
            }
            else{
                cout<<"1 ";
                ocount--;
            }
        }
    return 0;
}