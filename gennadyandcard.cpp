#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,count=0;
    char main[3],second[5][3];
    cin>>main;
    for(i=0;i<5;i++){
        cin>>second[i];
        if(second[i][0]==main[0]){
            count++;
        }
        else if(second[i][1]==main[1]){
            count++;
        }
    }
    if(count==0){
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }
    return 0;
}