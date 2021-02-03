#include<iostream>
using namespace std;
int* LeftRotate(int arr[],int n,int d){
    int temp[2];
    for(int i=0;i<d;i++){
        temp[i]=arr[i];
    }
    for(int i=d;i<n;i++){
        arr[i-d]=arr[i];

    }
    for(int i=0;i<d;i++){
        arr[n-d+i]=temp[i];
    }
    return arr;
}
int main(){
    int n=5;
    int d=2;
    int arr[5]={1,2,3,4,5};
    LeftRotate(arr,n,d);
    cout<<"Array After Rotation Is"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }
    return 0;
    
}