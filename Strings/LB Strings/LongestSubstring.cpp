#include<iostream>
using namespace std;
int LongestPalSubstr(string str){
    int n=str.size();
    int max_len=1,start=0;
    for(int i=0;i<str.length();i++){
        for(int j=i;j<str.length();j++){
            int flag=1;
            //Check Palindrome
            for(int k=0;k<(j-i+1)/2;k++){
                if(str[i+k]!=str[j-k]){
                    flag=0;
                }



            }
            if(flag&&(j-i+1)>max_len){
                start=i;
                max_len=j-i+1;
                
            }
        }
    }
}