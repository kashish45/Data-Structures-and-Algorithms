#include<iostream>
#include<math.h>

using namespace std;
int fact(int n){
    if(n<=1){
        return n;
    }
    else{
        return n*fact(n-1);
    }

}
int Rank(string str){
    int Rank=1;
    int n=str.length();
    int mul=fact(n);
    int count[256]={0};
    for(int i=0;i<n;i++){
        count[str[i]]++;

    }

    for(int i=1;i<256;i++){
        count[i]=count[i]+count[i-1];

    }

    for(int i=0;i<n;i++){
        mul=mul/(n-i);
        Rank=Rank+count[str[i]-1]*mul;
        for(int j=str[i];j<256;j++){
            count[j]--;

        }
    }

    return Rank;
    





}


int main(){
    string s="acb";
    cout<<"Rank of the given string is"<<Rank(s);
    return 0;

}