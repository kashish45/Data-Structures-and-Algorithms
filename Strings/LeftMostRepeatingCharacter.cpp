#include<iostream>
#include <climits>
using namespace std;
int firstRepeating(string s1){
    int res=INT_MAX;
    int fI[256];
    for(int i=0;i<256;i++){
        fI[i]=-1;
    }
    
    for(int i=0;i<s1.length();i++){
        if(fI[s1[i]]==-1){

            fI[s1[i]]=i;
        }
    
    else{
        res=min(res,fI[s1[i]]);
    }
    }
    
    return (res==INT_MAX)?-1:res;

}

int main(){
    string str="efggg";

    cout<<"Index of the left most repeating character is "<<firstRepeating(str);
    return 0;

}