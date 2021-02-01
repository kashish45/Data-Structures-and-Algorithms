#include<iostream>
using namespace std;
int* sort0s1s2s(int arr[],int n){
    int low=0,mid=0,high=n-1;
    while(mid<=high){
        switch (arr[mid])
        {
        case 0:
           swap(arr[low],arr[mid]);
           low++;
           mid++;
           break;
        
        case 1:
        mid++;
            break;

        case 2:
        swap(arr[mid],arr[high]);
        high--;
        break;

        }
    }
    return arr;

}

int main(){
    int n=6;
    int arr[6];
    cout<<"Enter The Array (Values=0, 1, 2) "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort0s1s2s(arr,n);
    cout<<"Array After Segregating Groups"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
    
}