#include<bits/stdc++.h>
using namespace std;

int main(){
    float ans,n;
    int sum=0,value,m;
    cin>>n;
    m=n;
    while(m){
        cin>>value;
        sum=sum+value;
        m--;
    }
    ans=sum/n;
    cout<<fixed;
    cout<<setprecision(5);
    cout<<ans;
    return 0;
}