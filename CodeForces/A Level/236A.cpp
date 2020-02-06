#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[40];
    char str[100];
    int count=0,i,var;
    cin>>str;
    memset(a,0,sizeof(a));
    for(i=0;i<strlen(str);i++){
        var=(int)str[i];
        var-=96;
        if(a[var]==0){
            count++;
            a[var]=1;
        }
    }
    if(count%2==0){
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }
    return 0;
}