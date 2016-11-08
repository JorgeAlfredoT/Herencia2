#include<iostream>
#include<cctype>
using namespace std;

template<typename T> // plantilla de tipo T
class Container{
private:
   T x;
public:
   Container(const T newx): x(newx){}
   ~Container(){}
   T incrementaUno(){x=x+1;}
   T getX(){return x;}
};

template <>
class Container<char>{
private:
   char chr;
public:
   Container(const char newchr): chr(newchr){}
   char getMayuscula(){return toupper(chr);} // devuelve la mayuscula
};



int main(){


   Container<int>icont(0), *p;
   p=&icont;
   for(int e=0 ; e<7; e++){
      p->incrementaUno();
      cout<<p->getX()<<endl; // fin del 0-7
   }

   Container<char> coo('t');
   cout<<coo.getMayuscula()<<endl;
   return 0;
}
