#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,j,rcount,ccount,value,sum;
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
          cin>>value;
          if(value==1){
              rcount=i;
              ccount=j;
          }

        }
    }
    rcount=3-rcount;
    ccount=3-ccount;
    sum=abs(rcount)+abs(ccount);
    cout<<sum;
    return 0;
}