#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,c,check=0;
    cin>>n;
    while(n--){
        cin>>m>>c;
        if(m>c){
            check++;
        }
        else if(c>m){
            check--;
        }
    }
    if(check==0){
        cout<<"Friendship is magic!^^";
    }
    else if(check>0){
        cout<<"Mishka";
    }
    else{
        cout<<"Chris";
    }
    return 0;
}