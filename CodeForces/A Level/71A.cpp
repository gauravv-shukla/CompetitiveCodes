#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    char str[101];
    while(n--){
        cin>>str;
        if(strlen(str)<11){
            cout<<str<<endl;
        }
        else{
            cout<<str[0]<<strlen(str)-2<<str[strlen(str)-1];
            cout<<endl;
        }
        str[0]='\0';
    }
    return 0;
}