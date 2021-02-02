#include<iostream>
using namespace std;
int* moveZeros(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[count]);
            count++;

        }
    }
    return arr;
}

int main(){
    int n=5;
    int arr[5]={2,0,8,0,9};
    moveZeros(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}