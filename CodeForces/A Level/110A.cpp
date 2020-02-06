#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,len,count=0;
    char str[19];
    cin>>str;
    len=strlen(str);
    for(i=0;i<len;i++){
        if(str[i]=='7' || str[i]=='4'){
            count++;
        }
    }
    if(count==7 || count==4){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}