#include<bits/stdc++.h>
using namespace std;


int main(){
    int n,i,check=0;
    cin>>n;
    char str[n][6],*p;
    for(i=0;i<n;i++){
        cin>>str[i];
    }
    i=0;
    while(n>i){
        p= strstr(str[i],"OO");
        if(p!=NULL){
            check++;
            *p='+';
            *(p+1)='+';
            break;
        }
        i++;
    }
    if(check==0){
        cout<<"NO";
    }
    else{
        cout<<"YES"<<endl;
        for(i=0;i<n;i++){
            cout<<str[i]<<endl;
            }
        }
    return 0;
}