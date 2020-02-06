#include<bits/stdc++.h>
using namespace std;

int main(){
    int len,i,count=0,var,arr[30];
    string str;;
    getline(cin,str);
    len=str.length();
    memset(arr,0,sizeof(arr));
    if(len<3){
        count=0;
    }
    else{
        for(i=1;i<len;i++){
            var=(int)str[i];
            var-=96;
            if(arr[var]==0 && (var<27 && var>0)){
                count++;
                arr[var]=1;
            }
        }
    }
    cout<<count;
    return 0;
}