#include<iostream>

int main(){
    int n,m,a,total;
    scanf("%d%d%d",&n,&m,&a);  
        if(n%a==0 && m%a==0){
            n=n/a;
            m=m/a;
            total=m*n;
            std::cout<<total;
            }
        else{
            if(n%a!=0 && m%a==0){
                m=m/a;
                n=(n/a)+1;
                total=m*n;
                std::cout<<total;
               }
            else if(m%a!=0 && n%a==0){
                n=n/a;
                m=(m/a)+1;
                total=m*n;
                std::cout<<total;
                }
            else{
                n=(n/a)+1;
                m=(m/a)+1;
                total=m*n;
                std::cout<<total;
                }
        }
    return 0;
}