#include<iostream>
using namespace std;
bool Anagrams(string s1,string s2){
    if(s1.length()!=s2.length()){
        return false;

    }

    int count[256]={0};
    for(int i=0;i<s1.length();i++){
        count[s1[i]]++;
    }

    for(int i=0;i<s2.length();i++){
        count[s2[i]]--;

    }

    for(int i=0;i<256;i++){
        if(count[i]!=0){
            return false;
        }
        

    }
    return true;
}


int main(){
    string s1="gaaks";
    string s2="ekegs";


    if(Anagrams(s1,s2)==false){
        cout<<"Not Anagrams";
    }
    else{
        cout<<"Anagrams";
    }
    return 0;
}