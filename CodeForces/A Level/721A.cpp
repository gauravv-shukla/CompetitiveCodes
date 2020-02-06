#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,count=0,m=0,i=0;
    cin>>n;
    char str[n+1];
    cin>>str;
    int a[n];
    while(n>i){
        if(str[i+1]=='\0' && str[i]=='B'){
            count++;
            if(count>0){
                a[m]=count;
                m++;
            }
        }
        else if(str[i]=='B'){
            count++;
        }
        else{
            if(count>0){
                a[m]=count;
                m++;
            }
            count=0;
        }
        i++;
    }
    i=0;
    if(m==0){
        cout<<0;
    }
    else if(m>0){
        cout<<m<<endl;
        cout<<a[i];
        while(m-1>i++){
            cout<<" ";
            cout<<a[i];
        }
    }
    return 0;
}