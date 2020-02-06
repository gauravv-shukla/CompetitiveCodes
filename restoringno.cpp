#include<bits/stdc++.h>
using namespace std;

int main(){
    long int x[4],big[3],i;
    cin>>x[0]>>x[1]>>x[2]>>x[3];
    big[0]=std::max(x[0],x[1]);
    big[1]=std::max(x[2],x[3]);
    big[2]=std::max(big[0],big[1]);
    for(i=0;i<4;i++){
        if(big[2]!=x[i]){
            cout<<big[2]-x[i]<<" ";
        }
    }
    return 0;
}