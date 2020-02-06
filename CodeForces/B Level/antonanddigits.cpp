#include<bits/stdc++.h>
using namespace std;

//734B

int main(){
    long int k2,k3,k5,k6;
    long long int count=0;
    cin>>k2>>k3>>k5>>k6;
    while((k2!=0 && k3!=0) || (k5!=0 && k6!=0 && k2!=0)){
        if(k2>0 && (k5>0 && k6>0)){
            count+=256;
            k2--;
            k5--;
            k6--;
        }
        else if(k2>0 && k3>0){
            count+=32;
            k2--;
            k3--;
        }
    }
    cout<<count;    
    return 0;
}
