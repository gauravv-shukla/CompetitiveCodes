#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,n,count=1;
    char a[3],b[3];
    cin>>n;
    cin>>a;
    while(n>1){
        cin>>b;
        if(a[0]==b[1]){
            count++;
        }
        a[0]='\0';
        strcpy(a,b);
        n--;
    }
    cout<<count;
    return 0;
}