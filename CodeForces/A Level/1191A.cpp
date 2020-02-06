#include<bits/stdc++.h>
using namespace std;

int main(){
    int x,a;
    cin>>x;
    x=x%4;
    if(x==0){
        cout<<"1 A";
    }
    else if(x==1){
        cout<<"0 A";
    }
    else if(x==2){
        cout<<"1 B";
    }
    else if(x==3){
        cout<<"2 A";
    }
    return 0;
}