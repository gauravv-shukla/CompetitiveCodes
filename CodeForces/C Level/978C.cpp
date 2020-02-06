#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//978C

int main(){
    long int i,n,m,count=0,value;
    cin>>n>>m;
    long int a[n];
    for(i=0;i<n;i++){
        cin>>value;
        count+=value;
        a[i]=count;
    }
    
    return 0;
}