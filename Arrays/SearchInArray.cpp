#include<iostream>
using namespace std;
int Search(int arr[],int n,int x){
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            return i;
        }
    }

    return -1;
}

int main(){
    int n=5;
    int arr[5];
    int x;
    cout<<"Enter The Array Element to be searched"<<endl;
    cin>>x;
    cout<<"Enter The Array Elements--->"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
  int found=Search(arr,n,x);
   cout<<"ELement was found at index "<<found;

   return 0;
}
