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
    int temp[4][4];
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            temp[C-j-1][i]=mat[i][j];
        }
    }

    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            mat[i][j]=temp[i][j];
        }
    }
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<"\n";
    }


}