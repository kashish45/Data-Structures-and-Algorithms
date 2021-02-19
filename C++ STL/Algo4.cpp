#include<iostream>
#include<algorithm>
#include<vector>


using namespace std;
int main(){
    int arr[]={10,20,30,40,50};
    int n=sizeof(arr)/sizeof(int);
    rotate(arr,arr+2,arr+n);
    cout<<"The rotated array is "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";


    }
    cout<<endl;




    //Apply same on vector--->
    vector<int> v{10,20,30,40,50};
    rotate(v.begin(),v.begin()+3,v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    cout<<endl;
    

    ///Next permutation---->
    next_permutation(v.begin(),v.end());
    //for each loop
    for(int x:v){
        cout<<x<<" ";
    }


    return 0;

}