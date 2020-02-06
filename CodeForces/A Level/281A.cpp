#include<bits/stdc++.h>
using namespace std;

int main(){
    char str[1000];
    cin>>str;
    if(str[0]>96 && str[0]<123){
        str[0]=str[0]-32;
    }
    cout<<str;
    return 0;
}