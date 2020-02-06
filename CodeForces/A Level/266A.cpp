#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,count=0,len;
    cin>>n;
    char str[n+1];
    cin>>str;
    len=strlen(str);
    for(int i=0;i<len;i++){
        if(str[i]==str[i+1]){
            count++;
        }
    }
    cout<<count;
    return 0;
}