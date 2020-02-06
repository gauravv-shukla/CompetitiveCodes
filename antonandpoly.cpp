#include<bits/stdc++.h>
using namespace std;

int main(){
    char geofig[5][13]={"Tetrahedron","Cube","Octahedron","Dodecahedron","Icosahedron"};
    char string[13];
    long int count=0,i,n;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>string;
        if(strcmp(geofig[0],string)==0){
            //Tetrahedron
            count+=4;
        }
        else if(strcmp(geofig[1],string)==0){
            //Cube
            count+=6;
        }
        else if(strcmp(geofig[2],string)==0){
            //Octahedron
            count+=8;
        }
        else if(strcmp(geofig[3],string)==0){
            //Dodecahedron
            count+=12;
        }
        else if(strcmp(geofig[4],string)==0){
            //Icosahedron
            count+=20;
        }
        string[0]='\0';
    }
    cout<<count;
    return 0;
}