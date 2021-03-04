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
 cout<<endl;
    for(int i=0;i<R;i++){
        if(i%2==0){
            for(int j=0;j<C;j++){
                cout<<mat[i][j]<<" ";
            }
            
        }
        else{
            for(int j=C-1;j>=0;j--){
                cout<<mat[i][j]<<" ";
            }
            
        }
    }
    return 0;

}