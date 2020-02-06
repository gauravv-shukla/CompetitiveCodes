#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int s,v1,v2,t1,t2,p1=0,p2=0;
    cin>>s>>v1>>v2>>t1>>t2;
    if(t1>t2){
    p1=(s*v1)+t1+abs(t2-t1);
    p2=(s*v2)+t2;
    }
    else if(t1==t2){
    p1=(s*v1)+t1;
    p2=(s*v2)+t2;
    }
    else{
    p1=(s*v1)+t1;
    p2=(s*v2)+t2+abs(t2-t1);
    }
    if(p1>p2){
        cout<<"Second";
    }
    else if(p1==p2){
        cout<<"Friendship";
    }
    else if(p2>p1){
        cout<<"First";
    }
    return 0;
}