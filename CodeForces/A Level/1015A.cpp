#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,count=0,l,r;
    cin>>n>>m;
    int a[m+1];
    memset(a,0,sizeof(a));
    while(n--){
        cin>>l>>r;
        for(int i=l;i<=r;i++){
            a[i]++;
            if(a[i]==1){
            count++;
            }
        }
    }
    if(count==m){  cout<<"0"; }
    else{
        cout<<m-count<<endl;
        for(int i=1;i<=m;i++){
            if(a[i]==0){
                cout<<i<<" ";
            }
        }
    }
    return 0;
}