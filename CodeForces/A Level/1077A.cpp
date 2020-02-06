#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    long long a,b,k,left,right,count=0;
    while(t--){
        count=0;
        cin>>a>>b>>k;
        left=k/2;
        right=k-left;
        count=(right*a)-(left*b);
        cout<<count<<endl;
    }
    return 0;
}