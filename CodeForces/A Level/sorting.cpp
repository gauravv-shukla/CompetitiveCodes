#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<n<<endl;
    sort(a,a+n,greater<int>());
    for (int i = 0; i < n; ++i) 
        cout << a[i] << " "; 
    return 0;
}