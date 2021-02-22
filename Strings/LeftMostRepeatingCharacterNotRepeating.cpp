#include<iostream>
#include<climits>
using namespace std;
int NotRepeating(string str){
    int res=INT_MAX;
    int fI[256];
    for(int i=0;i<256;i++){
        fI[i]=-1;
    }
    for(int i=0;i<str.length();i++){
        if(fI[str[i]]==-1){
        fI[str[i]]=i;
        }

        else{
            fI[str[i]]=-2;

        }

    }

    for(int i=0;i<256;i++){
        if(fI[i]>=0){
            res=min(res,fI[i]);
        }

        
    }
    return (res==INT_MAX)?-1:res;

}

int main(){
    string str="geeksforgeeks";

    cout<<"Index of the left most not repeating character is "<<NotRepeating(str);
    return 0;

}