#include<iostream>
using namespace std;
int getLargest(int arr[],int n){
    int large=0;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[large]){
            large=i;
        }
    }
    return large;

}
int secondLargest(int arr[],int n){
    int largest=getLargest(arr,n);
    int res=-1;
    for(int i=0;i<n;i++){
        if(arr[i]!=arr[largest]){
            if(res==-1){
                res=i;
            }
            else if(arr[i]>arr[res]){
                res=i;

            }
        }
    }
    return arr[res];
}

int main(){
    int n=5;
    int arr[5]={40,100,20,50,80};

    // cout<<"Largest Element In Array IS : "<<getLargest(arr,n)<<endl;
    cout<<"Second Largest Element In Array IS : "<<secondLargest(arr,n)<<endl;
    return 0;

}