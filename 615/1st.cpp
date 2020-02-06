#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t,a,b,c,n,count,bb,cc,aa;
    cin>>t;
    while(t--){
        count=0;
        aa=0;bb=0;cc=0;
        cin>>a>>b>>c>>n;
        bb=(n+a+c-2*b)/3;
        cc=(n+a+b-2*c)/3;
        aa=(n+b+c-2*a)/3;
        count=aa+bb+cc;
        aa+=a;
        bb+=b;
        cc+=c;
        if(count==n && (aa==bb && bb==cc)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}