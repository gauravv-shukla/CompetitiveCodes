#include<bits/stdc++.h>
using namespace std;

//978B

int main(){
    int n,count=0;
    cin>>n;
    char str[n+1];
    char sam[4]="xxx";
    char *p;
    cin>>str;
    p=strstr(str,sam);
    while(p){
        if(p){
            p=&p[1];
            count++;
        }
        p=strstr(p,sam);
    }
    cout<<count;
    return 0;
}