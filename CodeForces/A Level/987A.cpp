#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[6],count,n,i;
    char str[8];
    char arr[7][8]={"Power","Time","Space","Soul","Reality","Mind"};
    cin>>n;
    memset(a,0,sizeof(a));
    for(i=1;i<=n;i++){
        cin>>str;
        if(str[0]=='p'){
            a[0]=1;
        }
        else if(str[0]=='g'){
            a[1]=1;
        }
        else if(str[0]=='b'){
            a[2]=1;
        }
        else if(str[0]=='o'){
            a[3]=1;
        }
        else if(str[0]=='r'){
            a[4]=1;
        }
        else if(str[0]=='y'){
            a[5]=1;
        }
        str[0]='\0';
    }
    cout<<6-n<<endl;
    for(int i=0;i<6;i++){
        if(a[i]==0){
            cout<<arr[i]<<endl;
        }
    }
    return 0;
}
