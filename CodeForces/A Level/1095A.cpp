#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,t,i=0,k=0;
    cin>>n;
    char s[n+1];
    cin>>s;
    while(n>i){
        k++;
        cout<<s[i];
        i+=k;
    }
    return 0;
}