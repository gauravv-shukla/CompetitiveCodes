#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);    
    int q;
    long long a,b,c,max1,h;
    cin>>q;
    while(q--){
        cin>>a>>b>>c;
        max1=std::max(a,b);
        max1=std::max(max1,c);
        if(max1==a){
            h=(c+a-b)/2;
            cout<<h+b<<endl;
        }
        else if(max1==b){
            h=(c+b-a)/2;
            cout<<h+a<<endl;

        }
        else{
            h=(c+b-a)/2;
            cout<<h+a<<endl;
        }
    }
    return 0;
}