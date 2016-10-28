//alcance o ambito de una variable.
#include<iostream>
using namespace std;

void caso1(){
   if (true)
      int x=5;
   cout<<x<<endl;// esto va a salir error x no declarasa.
}

void caso2(){
   int *p;
   if(true)
      int x=5;
      p=&x;// error x no declarada
   cout<<*p<<endl;// etso va a salir error
}

int main(){
   caso1();
   caso2();
   return 0;
}
