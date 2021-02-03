#include<iostream>
using namespace std;
int MaxDiff(int arr[],int n){
    int res=arr[1]-arr[0];
    int minVal=arr[0];
    for(int j=1;j<n;j++){
        res=max(res,arr[j]-minVal);
        minVal=min(minVal,arr[j]);
    }
    return res;


}
int main(){
    int n=5;
    int arr[5]={2,3,10,6,20};
    cout<<"Max Difference "<<MaxDiff(arr,n);
    return 0;
}