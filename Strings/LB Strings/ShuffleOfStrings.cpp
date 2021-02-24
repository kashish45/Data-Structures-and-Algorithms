#include<iostream>
using namespace std;
bool ShuffleCheck(string s1,string s2,string result){
    if(s1.length()+s2.length()!=result.length()){
        return false;

    }

    int i=0,k=0,j=0;

    while(k!=result.length()){
        if(i<s1.length() && s1[i]==result[k]){
            i++;
        }
        else if(j<s2.length() && s2[j]==result[k]){
            j++;
        }
        else{
            return false;
        }
        k++;
    }
    if(i<s1.length() || j<s2.length()){
        return false;
    }
    return true;
}

int main(){
    string s1="XY";
    string s2="12";
    string result="2YX1";
    if(ShuffleCheck(s1,s2,result)==true){
        cout<<"Valid  Shuffles";
    }
    else{
        cout<<"Invalid Shuffles";
    }

return 0;

    
    }