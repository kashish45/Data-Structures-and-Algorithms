#include<iostream>
using namespace std;
int* rotate(int arr[],int n){
    int temp=arr[n-1];
    for(int i=n;i>=0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
    return arr;

}

int main(){
    int n=6;
    int arr[6];
    cout<<"Enter The array Elements "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    rotate(arr,n);
    cout<<"Array After 1 Rotation Is"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        
    }
    return 0;
    
}