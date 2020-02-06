#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,a,b,c,d,tot,tot1,rank=1;
    cin>>n;
    cin>>a>>b>>c>>d;
    tot=a+b+c+d;
    n--;
    while(n--){
        cin>>a>>b>>c>>d;
        tot1=a+b+c+d;
        if(tot1>tot){   rank++; }
    }
    cout<<rank;
    return 0;
}