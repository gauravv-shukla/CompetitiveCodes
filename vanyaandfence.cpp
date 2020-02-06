#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,n,h,count=0,value;
    cin>>n>>h;
    while(n){
        cin>>value;
        if(h>=value){
            count++;
        }
        else{
            count+=2;
        }    
        n--;
    }
    cout<<count;
    return 0;
}