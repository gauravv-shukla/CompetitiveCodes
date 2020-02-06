#include<bits/stdc++.h>
using namespace std;

//1106C

int main(){
    long int i,n,count=0,sum=0;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    if(n>100){
        //Shell Sort
        int temp,gap,j;
        for (int gap = n/2; gap > 0; gap /= 2) { 
            for (int i = gap; i < n; i += 1) { 
               temp = arr[i];    
                for (j = i; j >= gap && arr[j - gap] > temp; j -= gap){ 
                    arr[j] = arr[j - gap];
                } 
            arr[j] = temp; 
            }
        }
    }    
    else{
        //Insertion Sort
        int key,j;
        for (i = 1; i < n; i++) {  
            key = arr[i];  
            j = i - 1;  
            while (j >= 0 && arr[j] > key) {  
                arr[j + 1] = arr[j];  
                j = j - 1;  
            }  
        arr[j + 1] = key;  
        }  

    }
    for(i=0;i<n/2;i++){
        count=arr[i]+arr[n-1-i];
        sum+=(count*count);
        count=0;
    }
    cout<<sum;
    return 0;
}