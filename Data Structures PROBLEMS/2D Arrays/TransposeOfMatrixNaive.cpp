#include<iostream>
using namespace std;
int main(){
    int R=4,C=4;
    int mat[4][4];
    cout<<"Enter The Array Elements"<<endl;
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            cin>>mat[i][j];
        }

    }
    cout<<"The Array elements are"<<endl;
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<"\n";
    }

    cout<<"Transpose of matrix is"<<endl;
    int temp[4][4];
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            temp[i][j]=mat[j][i];
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
    return 0;
}