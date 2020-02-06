#include<bits/stdc++.h>
using namespace std;

int main(){
    int x,y,z;
    cin>>x>>y>>z;
    if(x>(y+z) && (x>y)){
        cout<<"+";
    }
    else if(y>(x+z) && (y>x)){
        cout<<"-";
    }
    else if(x+z>=y && y+z>=x){
        cout<<"?";
    }
    else{
        cout<<"0";
    }
    return 0;
}