#include<iostream>
using namespace std;
void PatSearch(string txt,string pat){
    int n=txt.length();
    int m=pat.length();

    for(int i=0;i<=n-m;i++){
        int j;
        for(j=0;j<m;j++)
            if(txt[i+j]!=pat[j])
                break;
            

            if(j==m)
            cout<<i<<endl;
        
    
        
    }
}

int main(){
    string s1="SHSHSH";
    string s2="SH";

    PatSearch(s1,s2);
    return 0;

}