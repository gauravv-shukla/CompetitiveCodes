#include<bits/stdc++.h>
using namespace std;

int main(){
    int count=0;
    long int x;
    cin>>x;
    while(x>0){
        if(x>=5){
            count+=x/5;
            x=x-(count*5);
        }
        else if(x>=4){
            count+=x/4;
            x=x-(count*4);
        }
        else if(x>=3){
            count+=x/3;
            x=x-(count*3);
        }
        else if(x>=2){
            count+=x/2;
            x=x-(count*2);
        }
        else if(x>=1){
            count+=x;
            x=x-1;
        }
    }
    cout<<count;
    return 0;
}