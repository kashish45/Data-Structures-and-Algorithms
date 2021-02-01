#include<iostream>
using namespace std;
int* Reverse(int arr[],int n){
    int low=0;
    int high=n-1;
    while(low<high){
        int temp=arr[low];
        arr[low]=arr[high];
        arr[high]=temp;
        low++;
        high--;

    }
    return arr;

    
}

int main(){
   int n;
   

   cout<<"Enter The Size Of Array"<<endl;
   cin>>n;

   int arr[6];


   
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }

   cout<<"The Reversed Array is"<<endl;
   Reverse(arr,n);
   for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";

   }
   return 0;



    
}