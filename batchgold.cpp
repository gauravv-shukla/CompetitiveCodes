#include<bits/stdc++.h>
using namespace std;


int main(){
    int n,k;
    cin>>n;
    if(n%2==0){
        k=n/2;
        cout<<k<<endl;
        cout<<"2";
        while(k-1){
            cout<<" 2";
            k--;
        }
    }
    else{
        if(n>3){
            k=n/2;
            cout<<k<<endl;
            cout<<"2";
            while(k-2){
                cout<<" 2";
                k--;
            }
            cout<<" 3";

        }
        else{
            cout<<"1"<<endl;
            cout<<"3";
        }
    }
    return 0;
}