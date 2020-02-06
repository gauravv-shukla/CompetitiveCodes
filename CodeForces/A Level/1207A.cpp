#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,buns,beef,cutlets,ham,chicken,count=0;
    cin>>t;
    while(t--){
        count=0;
        cin>>buns>>beef>>cutlets;
        cin>>ham>>chicken;
        buns/=2;
        if(ham>=chicken){
            if(buns<=beef){
                count+=buns*ham;
            }
            else{
                count+=ham*beef;
                buns-=beef;
                if(buns>=cutlets){
                    count+=cutlets*chicken;
                }
                else{
                    count+=buns*chicken;
                }
            }
        }
        else{
            if(buns<=cutlets){
                count+=buns*chicken;
            }
            else{
                count+=chicken*cutlets;
                buns-=cutlets;
                if(buns>=beef){
                    count+=beef*ham;
                }
                else{
                    count+=buns*ham;
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}