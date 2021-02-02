#include<iostream>
using namespace std;
int* Delete(int arr[],int n,int x){
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            break;
        }
  

     for(int j=i;j<n-1;j++){
         arr[j]=arr[j+1];
     }


    }
    return arr;
}

int main(){
    int n=5;
    int arr[5];
    int x=40;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    Delete(arr,n,x);

    cout<<"Array After Deletion Is :"<<endl;
    for(int i=0;i<n-1;i++){
        cout<<arr[i]<<" ";

    }

    return 0;

}