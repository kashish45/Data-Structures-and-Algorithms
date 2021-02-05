#include<iostream>
using namespace std;
int MaxLen(int arr[],int n){
    int res=1;
    for(int i=0;i<n;i++){
        int curr=1;
        for(int j=i+1;j<n;j++){
            if((arr[j]%2==0&&arr[j-1]%2!=0)||(arr[j]%2!=0&&arr[j-1]%2==0)){
                curr++;
            }
            else{
                break;

            }

            res=max(res,curr);
        }
    }
    return res;

}
int main(){
    int n=6;
    int arr[6]={5,10,20,6,3,8};
    cout<<"Max Length Sub Array"<<MaxLen(arr,n);
    return 0;

}