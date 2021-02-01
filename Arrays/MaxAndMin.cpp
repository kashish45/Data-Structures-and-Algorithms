#include<iostream>
using namespace std;
int MaxElement(int arr[],int n){
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }

    }
    return max;

}

int MinElement(int arr[],int n){
    int min=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }

    return min;
}


int main(){
    int n=6;
    int arr[6];
    cout<<"Enter The Array Elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int max=MaxElement(arr,n);
    cout<<"The Max element is "<<max<<endl;
    int min=MinElement(arr,n);
    cout<<"The Min element is "<<min;

    return 0;
}