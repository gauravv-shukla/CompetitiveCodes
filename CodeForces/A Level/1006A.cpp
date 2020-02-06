#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,i;
    cin>>n;
    long long a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2==0){
            a[i]--;
        }
    }
    cout<<a[0];
    for(i=1;i<n;i++){
        cout<<" "<<a[i];
    }
    return 0;
}