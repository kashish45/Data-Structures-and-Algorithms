#include<iostream>
using namespace std;
int MaxDiff(int arr[],int n){
    int res=arr[1]-arr[0];
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            res=max(res,arr[j]-arr[i]);

        }
    }
    return res;

}
int main(){
    int n=5;
    int arr[5]={2,3,10,6};
    cout<<"Max Difference "<<MaxDiff(arr,n);
    return 0;
}