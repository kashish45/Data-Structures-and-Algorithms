#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={20,30,40,40,40,50,100,110};
    int n=sizeof(arr)/sizeof(int);
    //Search in A Sorted Array ---- Binary Search
    int key;
    cin>>key;
    bool present=binary_search(arr,arr+n,key);
    if(present){
        cout<<"Present"<<endl;

    }
    else{
        cout<<"Not present";

    }

//Get The Index of thi element--->
//lower_bound(s,e,key) and upper_bound(s,e,key )
auto lb=lower_bound(arr,arr+n,40);
cout<<"Index of the element Searched "<<(lb-arr)<<endl;

if((lb-arr)==n){
    cout<<"Element Is Not Present"<<endl;
    
}


//upper bound method
auto ub=upper_bound(arr,arr+n,40);
cout<<"Index of the element Searched using Upper Bound "<<(ub-arr)<<endl;


cout<<"Occurence Frequency of 40 is "<<(ub-lb)<<endl;










    return 0;

}