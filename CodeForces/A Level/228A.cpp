#include<bits/stdc++.h>
using namespace std;

int main(){
    long int a,b,c,d,count=0;
    cin>>a>>b>>c>>d;
    if(a==b || a==c || a==d){
        count++;
    }
    if(b==c || b==d){
        count++;
    }
    if(c==d){
        count++;
    }
    cout<<count;
    return 0;
}