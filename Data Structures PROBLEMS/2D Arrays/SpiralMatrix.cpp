#include<iostream>
using namespace std;
int main(){
    int mat[4][4];
    int R=4,C=4;
    //Input matrix
    cout<<"Enter the matrix elements"<<endl;
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            cin>>mat[i][j];

        }
    }

    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<"\n";
    }

    int top=0,left=0,right=C-1,bottom=R-1;
    while(top<=bottom && left<=right){
        for(int i=left;i<=right;i++){
            cout<<mat[top][i]<<" ";
            
        }
        top++;
        for(int i=top;i<=bottom;i++){
            cout<<mat[i][right]<<" ";
            

        }
        right--;

        if(top<=bottom){
            for(int i=right;i>=left;i--){
                cout<<mat[bottom][i]<<" ";
                

            }
            bottom--;
        }
      if(left<=right){
                for(int i=bottom;i>=top;i--){
                    cout<<mat[i][left]<<" ";
                    
                }
                left++;
            }
            
        }
    }
