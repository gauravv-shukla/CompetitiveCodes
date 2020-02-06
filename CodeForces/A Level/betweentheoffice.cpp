#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,count=0;
    cin>>n;
    char string[n+1];
    cin>>string;
    for(int i=0;i<=n;i++){
        if(string[i]=='F' && string[i-1]=='S'){
            count++;
        }
        else if(string[i]=='S' && string[i-1]=='F'){
            count--;
        }
    }
    (count>0) ? cout<<"YES" : cout<<"NO";
    return 0;
}