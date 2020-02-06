#include<bits/stdc++.h>
using namespace std;

int main(){
    long int n,value,random=0,count=0;
    cin>>n;
    value=n;
    while(value!=0){
        if(value>=100){
            count=value/100;
            value=value-(100*count);
        }
        else if(value>=20){
            random=value/20;
            value=value-(20*random);
            count+=random;
        }
        else if(value>=10){
            random=value/10;
            value=value-(10*random);
            count+=random;
        }
        else if(value>=5){
            value-=5;
            count++;
        }
        else if(value>=1){
            random=value;
            value=value-random;
            count+=random;
        }
    }
    cout<<count;
    return 0;
}