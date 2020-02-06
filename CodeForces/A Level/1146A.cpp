#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int count=0;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='a'){
            count++;
        }
    }
    if(count>s.size()/2){
        cout<<s.size();
    }
    else{
        count+=(count-1);
        cout<<count;
    }
    return 0;
}