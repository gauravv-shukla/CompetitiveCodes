#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n;
    int i,k;
    cin>>n>>k;
    for(i=0;i<k;i++){
        if(n%10!=0){
            n--;
        }
        else{
            n/=10;
        }
    }
    cout<<n;

    return 0;
}