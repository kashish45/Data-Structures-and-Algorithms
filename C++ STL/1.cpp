#include<iostream>
using namespace std;
//Linear Search




int Search(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;

}

int main(){
    int a[]={1,2,3,4,10,12};
    int n=sizeof(a)/sizeof(int);
    int key=10;
    cout<<Search(a,n,key);
    return 0;


}