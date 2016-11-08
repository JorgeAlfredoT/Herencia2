#include<iostream>
using namespace std;


template<typename T, int N>

class ArrayContainer{
private:
   T lista[N];
public:
   void set(const int e, const T val){lista[e]=val;}
   T get(const int e){return lista[e];}
};


int main(){
   int j;
   ArrayContainer<int,5> p;
   for(int e=0 ; e<5 ; e++){
      cout<<"numero: ";
      cin>>j;
      p.set(e,j);
   }
   for(int e=0 ; e<5; e++)
      cout<<p.get(e)<<endl;

   return 0;
}
