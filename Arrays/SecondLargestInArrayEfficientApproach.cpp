#include<iostream>
using namespace std;
int secondLargest(int arr[],int n){
    int largest=0,res=-1;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[largest]){
            res=largest;
            largest=i;

        }
        else if(arr[i]!=arr[largest]){
            if(res==-1||arr[i]>arr[res]){
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