#include<iostream>
#include<list>
using namespace  std;

class Book{
    public:
       string name;
       int price;

    Book(){

    }   

    Book(string name,int price){
        this->name=name;
        this->price=price;


    }

};


template<class ForwardIterator,class T,class Compare>
ForwardIterator search(ForwardIterator start,ForwardIterator end, T key,Compare cmp){

    while(start!=end){
        if(cmp(*start,key)){
            return start;
        }
        start++;

    }
    return end;


}

class BookCompare{
    public:
      bool operator()(Book A,Book B){
          if(A.name==B.name){
              return true;
          }
          return false;

      }
};
int main(){
    Book b1("C++",100);
    Book b2("python",120);
    Book b3("java",130);
    Book b4(b1);//Book b4 copy of b1

    list<Book> l;
    l.push_back(b1);
    l.push_back(b2);
    l.push_back(b3);


    Book booktofind("C++",110); //new edition book
    BookCompare cmp;
    // if (cmp(b1,booktofind)){
    //     cout<<"True Same Books";
    // }
    auto it=search(l.begin(),l.end(),booktofind,cmp);
    if(it!=l.end()){
        cout<<"Book found in library!";
    }
    else{
        cout<<"Not Found";
    }

    //can work with any container


}