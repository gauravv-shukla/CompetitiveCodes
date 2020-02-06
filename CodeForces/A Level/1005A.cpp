#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,count=0;
    cin>>n;
    int a[n],b[n];
    a[0]=0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        if(a[i]==1){
            b[count]=a[i-1];
            count++;
        }
    }
    cout<<count<<endl;
    for(int i=1;i<count;i++){    cout<<b[i]<<" "; }
    cout<<a[n];
    return 0;
}