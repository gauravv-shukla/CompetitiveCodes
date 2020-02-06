#include<bits/stdc++.h>
using namespace std;

int main(){
    int len,count=0;
    char str[101];
    cin>>str;
    len=strlen(str);
    for(int i=0;i<len;i++){
        if((int)str[i]<91){
            count++;
        }
        else{
            count--;
        }
    }
    for(int i=0;i<len;i++){
        if(count>0){
            if(str[i]>91){
                str[i]-=32;
                cout<<str[i];
            }
            else{
                cout<<str[i];
            }
        }
        else{
            if(str[i]<91){
                str[i]+=32;
                cout<<str[i];
            }
            else{
                cout<<str[i];
            }
        }        
    }
    return 0;
}