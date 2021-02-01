#include<iostream>
using namespace std;
int* SortNegatives(int arr[],int n){
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            if(i!=j){
                swap(arr[i],arr[j]);
                j++;
            }
        }
    }

    return arr;
}
int main(){
    int n=5;
    int arr[5];
    cout<<"Enter The Array Elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    
    SortNegatives(arr,n);
    cout<<"The Changed Array is "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;

}