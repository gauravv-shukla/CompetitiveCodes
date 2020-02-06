#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,min,diff;
    cin>>a>>b;
    min=std::min(a,b);
    diff=abs(a-b);
    if(diff%2==0){
        diff/=2;
    }
    else{
        diff--;
        diff/=2;
    }
    cout<<min<<" "<<diff;
    
    return 0;
}