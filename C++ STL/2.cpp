#include<iostream>
#include<cstring>

using namespace std;
//Linear Search

//Using Generic Functions
//Can be used for any type of array objects-->
// search(book,...)
//search(person,,)
 
template<typename T>




int search(T arr[],int n,T key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;

}

int main(){
    int a[]={1,2,3,4,10,12};
    int n=sizeof(a)/sizeof(int);
    int key=1.2;
    // cout<<Search(a,n,key);

    float b[]={1.1,1.2,1.3};
    float k=1.2;
    cout<<search(b,3,k)<<endl;
    return 0;


}