#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,count=0;
    cin>>a>>b>>c;
    if(a>b){
        if(a>c){
            if(b+c>a){
                count=0;
            }
            else{
                count=a+1-b-c;
            }
        }
        else{
            if(b+a>c){
                count=0;
            }
            else{
                count=c+1-b-a;
            }
        }
    }
    else{
        if(b>c){
            if(a+c>b){
                count=0;
            }
            else{
                count=b+1-a-c;
            }
        }
        else{
            if(b+a>c){
                count=0;
            }
            else{
                count=c+1-b-a;
            }
        }
    }
    cout<<count;
    return 0;
}