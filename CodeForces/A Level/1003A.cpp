#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,a[101],value,largest=0;
    cin>>n;
    memset(a,0,sizeof(a));
    while(n--){
        cin>>value;
        a[value]++;
        if(a[largest]<a[value]){
            largest=value;
        }
    }
    cout<<a[largest]<<endl;
    return 0;
}