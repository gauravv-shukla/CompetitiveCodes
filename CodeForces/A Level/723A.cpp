#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,count=0;
    cin>>a>>b>>c;
    if(a>=b && a>=c){
        if(b>=c){
            count=a-c;
        }
        else{
            count=a-b;
        }
    }
    if(b>=a && b>=c){
        if(c>=a){
            count=b-a;
        }
        else{
            count=b-c;
        }
    }
    if(c>=b && c>=a){
        if(b>=a){
            count=c-a;
        }
        else{
            count=c-b;
        }        
    }
    cout<<count;
    return 0;
}