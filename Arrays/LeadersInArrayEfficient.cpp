#include<iostream>
using namespace std;
void Leaders(int arr[],int n){
    int curr_leader=arr[n-1];
    cout<<curr_leader<<" ";
    for(int i=n-2;i>=0;i--){
        if(arr[i]>curr_leader){
            curr_leader=arr[i];
            cout<<curr_leader<<" ";
        }
    }
}
int main(){
    int n=5;
    int arr[5]={7,10,9,3,4};
    Leaders(arr,n);
    return 0;



}