#include<iostream>
using namespace std;


bool areAnagram(string pat,string txt,int i){

    int count[256]={0};
    for(int j=0;j<txt.length();j++){
        count[pat[i]]++;
        count[txt[i+j]]--;
    }


    for(int j=0;j<256;j++){
        if(count[j]!=0)
           return false;
    }
    return true;


}
bool IsPresent(string txt,string pat){
    int n=txt.length();
    int m=pat.length();
    for(int i=0;i<=n-m;i++){
        if(areAnagram(pat,txt,i))
              return true;
    }
    return false;
}

int main(){
    string txt="geeksforgeeks";
    string pat="frog";

    if(IsPresent(txt,pat)==true){
        cout<<"Search Found";
    }
    else{
        cout<<"Search Not Found";
    }
    return 0;

}