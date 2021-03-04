#include<iostream>
using namespace std;
int main(){
    int R=4,C=4;
    int mat[4][4];
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            cin>>mat[i][j];
        }
    }
    cout<<endl;
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<"\n";
    }

    cout<<"Matrix Rotated By 90 Degrees Anticlockwise"<<endl;

    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            swap(mat[i][j],mat[j][i]);
        }
    }

    for(int i=0;i<R;i++){
        int low=0,high=R-1;
        while(low<high){
            swap(mat[low][i],mat[high][i]);
            low++;
            high--;

        }
    }
        for(int i=0;i<R;i++){
            for(int j=0;j<C;j++){
                cout<<mat[i][j]<<" ";
            }
            cout<<"\n";
        }

    
}