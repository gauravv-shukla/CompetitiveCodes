#include<bits/stdc++.h>
using namespace std;

int main(){
    int l,b,count=0;
    cin>>l>>b;
    while(b>=l){
        l*=3;
        b*=2;
        count++;
    }
    cout<<count;
    return 0;
}