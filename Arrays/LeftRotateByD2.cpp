#include<iostream>
using namespace std;
int* Reverse(int arr[],int low,int high){
    while(low<=high){
        int temp=arr[low];
        arr[low]=arr[high];
        arr[high]=temp;
        low++;
        high--;

    }
    return arr;

}
int* LeftROtate(int arr[],int n,int d){
    Reverse(arr,0,d-1);
    Reverse(arr,d,n-1);
    Reverse(arr,0,n-1);

    return arr;


}
int main(){
    int n=5;
    int d=2;
    int arr[5]={1,2,3,4,5};
    LeftROtate(arr,n,d);
    cout<<"Array After Rotation Is"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }
    return 0;
    
}