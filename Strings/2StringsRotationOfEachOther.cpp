#include<iostream>
using namespace std;
bool AreRotation(string str1,string str2){
    if(str1.length()!=str2.length()){
        return false;
    }

    //Concatenate str1 with itself
    str1=str1+str1;
    return (str1.find(str2)!=string::npos);
}

int main(){
    string s1="ABCD";
    string s2="KASH";

    if(AreRotation(s1,s2)==true){
        cout<<"The strings are rotation of each other";
    }
    else{
        cout<<"They are not rotation of each other";

    }

    return 0;

}
