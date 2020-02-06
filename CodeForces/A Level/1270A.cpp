#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,k1,k2,large1,large2,k11,k22;
    cin>>t;
    while(t--){
        large1=0;
        large2=0;
        cin>>n>>k1>>k2;
        while(k1--){
            cin>>k11;
            if(k11>large1){
                large1=k11;
            }
        }
        while(k2--){
            cin>>k22;
            if(k22>large2){
                large2=k22;
            }
        }
        large1>large2?cout<<"YES"<<endl : cout<<"NO"<<endl;
    }
    return 0;
}