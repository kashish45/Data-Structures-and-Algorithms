#include<iostream>
using namespace std;
int* Rotate(int arr[],int n){
    int temp=arr[0];
    for(int i=1;i<n;i++){
        arr[i-1]=arr[i];

    }
    arr[n-1]=temp;
    return arr;

}
int main(){
    int n=5;
    int arr[5]={1,2,3,4,5};
    Rotate(arr,n);
    cout<<"Array After One Rotation Is "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }
    return 0;

}