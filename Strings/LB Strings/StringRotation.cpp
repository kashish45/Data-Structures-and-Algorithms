#include<iostream>
using namespace std;
bool IsRotation(string str1,string  str2){
    if(str1.length()!=str2.length()){
        return false;
    }

    return ((str1+str1).find(str2)!=string::npos);
}

int main(){
 string str1="ABCD";
 string str2="KASH";
 if(IsRotation(str1,str2)==true){
     cout<<"2 strings are rotation of each other";
 }
 else{
     cout<<"Not rotation of each other";
 }
 return 0;
}