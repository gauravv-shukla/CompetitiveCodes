#include<bits/stdc++.h>
using namespace std;

int main(){
    int l,r,count=0,n,largest=0;
    cin>>n;
    while(n--){
        cin>>l>>r;
        count+=r-l;
        if(largest<count){
            largest=count;
        }
    }
    cout<<largest;
    return 0;
}