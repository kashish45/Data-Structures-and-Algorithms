#include<iostream>
using namespace std;

int main(){
    
    int arr[3][3];

    
    cout<<"Enter the Matrix Elements"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    int x;
    cout<<"Enter the element to be searched"<<endl;
    cin>>x;
    bool flag=false;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]==x){
                cout<<"Element found at position"<<i<<"th row and"<<j<<"th column";
                flag=true;
            }
        }
    }
    if(flag){
        cout<<"element found";
    }
    else{cout<<"Not found";}
    return 0;


}