#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n,x,a,b,total=0;
    cin>>t;
    while(t--){
        cin>>n>>x>>a>>b;
        total=n-(abs(a-b)+1);
        if(total>=x){
            cout<<x+abs(a-b)<<endl;
        }
        else{
            cout<<total+abs(a-b)<<endl;
        }
    }
    return 0;
}

