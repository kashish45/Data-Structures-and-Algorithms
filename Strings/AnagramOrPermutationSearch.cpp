#include<iostream>
using namespace std;

bool compare(int arr1[], int arr2[]) 
{ 
    for (int i=0; i<256; i++) 
        if (arr1[i] != arr2[i]) 
            return false; 
    return true; 
} 
void isPresent(string str,string pat){
    int countTxt[256]={0};
    int countPat[256]={0};
    for(int i=0;i<pat.length();i++){
        countTxt[str[i]]++;
        countPat[pat[i]]++;

    }

    for(int i=pat.length();i<str.length();i++){
        if(compare(countTxt,countPat)==true){
            cout<<"Pattern Found";
        }
        else{
            cout<<"Pattern not found";
        }
            countTxt[str[i]]++;
            countTxt[str[i-pat.length()]]--;
        



    }
    
    

}




int main(){
    string str="geeks";
    string pat="eks";

    isPresent(str,pat);
    

    return 0;

}