#include<iostream>
using namespace std;
int Majority(int arr[],int n){
    for(int i=0;i<n;i++){
        int count=1;
        for(int j=i+1;j<n;j++){
            count++;

        }
        if(count>n/2){
            return i;
        }
    }
    return -1;

}
int main(){
    int n=6;
    int arr[6]={2,9,9,1,9};
    cout<<"Majority Element at index :"<<Majority(arr,n);
    return 0;
}