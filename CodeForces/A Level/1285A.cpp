#include<bits/stdc++.h>
using namespace std;

int main(){
    long n,lcount=0,rcount=0;
    cin>>n;
    char str[n+1];
    cin>>str;
    for(int i=0;i<n;i++){
        if(str[i]=='L'){
            lcount++;
        }
        else{
            rcount++;
        }
    }
    cout<<lcount+rcount+1;
    return 0;
}