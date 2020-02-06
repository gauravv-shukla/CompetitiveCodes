  #include<bits/stdc++.h>
  using namespace std;

  
  int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t,len,i;
    cin>>t;
    int t1[t];
    char str[1000];
    i=0;
    while(t>i){
        cin>>str;
        len=strlen(str);
        if(str[len-1]=='a'){
          t1[i]=3;
        }
        else if(str[len-1]=='o'){
          t1[i]=1;
        }
        else if(str[len-1]=='u'){
          t1[i]=2;
        }
        str[0]='\0';
        i++;
    }
    for(i=0;i<t;i++){
      if(t1[i]==1){
        cout<<"FILIPINO"<<endl;
      }
      else if(t1[i]==2){
        cout<<"JAPANESE"<<endl;
      }
      else if(t1[i]==3){
        cout<<"KOREAN"<<endl;
      }
    }
    return 0;
  }