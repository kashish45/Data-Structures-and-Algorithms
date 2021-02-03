#include<iostream>
using namespace std;
void Leaders(int arr[],int n){
    for(int i=0;i<n;i++){
        bool flag=false;
        for(int j=i+1;j<n;j++){
            if(arr[i]<=arr[j]){
            flag=true;
            break;
            }

        }
        if(flag==false){
            cout<<arr[i]<<" ";
        }
    }
    
}

int main(){
    int n=5;
    int arr[5]={7,10,9,3,4};
    Leaders(arr,n);
    return 0;



}