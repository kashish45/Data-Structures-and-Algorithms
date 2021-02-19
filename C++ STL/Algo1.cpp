#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={1,10,11,9,100};
    int n=sizeof(arr)/sizeof(int);
    //Search ----> find
    int key;
    cin>>key;
    auto it=find(arr,arr+n,key);
     cout<<*it<<endl;
     int index=it - arr;
      //Index of the element to be searched 
     if (index==n){
         cout<<"Element Not Present";

     }
     else{
         cout<<"Element present at index "<<index;
     }






    return 0;

}