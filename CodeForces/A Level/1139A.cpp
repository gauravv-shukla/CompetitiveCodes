#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,count=0;
    cin>>n;
    char str[n];
    cin>>str;
    for(int i=0;i<n;i++){
        if((int)str[i]%2==0){
            count+=i+1;
        }
    }
    cout<<count;
    return 0;
}