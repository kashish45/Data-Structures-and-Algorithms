#include<iostream>
#include<map>

using namespace std;
void PrintDuplicates(string Str){
  map<char,int> count;
  for(int i=0;i<Str.length();i++){
      count[Str[i]]++;
  }

  for(auto it:count){
      if(it.second>1){
          cout<<it.first<<"Count is :"<<it.second<<endl;

      }
  }

}

int main(){
    string str="aaabbbcccdde";
    PrintDuplicates(str);
    return 0;
}