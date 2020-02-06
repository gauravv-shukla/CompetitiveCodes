#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a[4];
    cin>>a[0]>>a[1]>>a[2]>>a[3];
    long long count=0,len,i=0;
    char str[100000];
    cin>>str;
    len=strlen(str);
    while(len>i){
        count+=a[str[i]-'1'];
        i++;
    }
    cout<<count;
    return 0;
}