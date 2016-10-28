// el new y el delete en numeros enteros .
#include<iostream>
using namespace std;

int *getptrtoFive(){
   int *x = new int;
   *x=5;
   return x;
}


int main(){
   /*
   int *p = getptrtoFive();
   cout<<*p<<endl;
   delete p;  */

   int *p;
   for(int e=0;e<3;e++){
      p=getptrtoFive();
      cout<<*p<<endl;
      delete p;
   }
   return 0;
}
