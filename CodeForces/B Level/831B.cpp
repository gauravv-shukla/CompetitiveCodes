#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    char str1[27],str2[27],res[1000],*p,*x;
    cin>>str1>>str2;
    cin>>res;
    for(k=0;k<strlen(res);k++){
        n=int(res[k]);
        if(n<91 && n>64){
            n+=32;
            *x=(char)n;
            cout<<x;
            p=strstr(str1,x);
            n=int(str2[26-strlen(p)-1]);
            n-=32;
            printf("%c",n);
        }
        else if(n>96){
            *x=char(n);
            cout<<x;
            p=strstr(str1,x);
            n=int(str2[strlen(str1)-strlen(p)-2]);
            printf("%c",n);
        }
        else{
        printf("%c",n);
        }
    }

return 0;
}