#include<iostream>
using namespace std;
int Max1s(int arr[],int n){
    int res=0;
    int curr=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            curr=0;
        }
        else if(arr[i]==1){
            curr++;
            res=max(res,curr);

        }

    }
    return res;

}
int main(){
    int n=8;
    int arr[8]={0,1,1,1,0,1,1,0};
    cout<<"Max 1s  "<<Max1s(arr,n);
    return 0;
}