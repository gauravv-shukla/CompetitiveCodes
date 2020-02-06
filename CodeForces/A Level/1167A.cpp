#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,len,flag;
    cin>>t;
    while(t--){
        flag=0;
        cin>>n;
        char str[n+1];
        cin>>str;
        if(strlen(str)<11 || (strlen(str)==11 && str[0]!='8')){
            cout<<"NO"<<endl;
        }
        else{
            len=strlen(str);
            for(int i=0;i<=n-11 && flag!=1;i++){
                if(str[i]=='8'){
                    flag=1;
                    cout<<"YES"<<endl;
                }
            }
            if(flag==0){
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}