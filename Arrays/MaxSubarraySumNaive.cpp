#include<iostream>
using namespace std;
int SubArray(int arr[],int n){
    int res=arr[0];
    for(int i=0;i<n;i++){
        int curr=0;
        for(int j=i;j<n;j++){
            curr=curr+arr[i];
            res=max(res,curr);
        }

    }
    return res;

}
int main(){
    int n=3;
    int arr[3]={5,8,-3};
    cout<<"Max Subarray Sum"<<" "<<SubArray(arr,n);
    return 0;

}