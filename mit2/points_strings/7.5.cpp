#include<iostream>
using namespace std;

int main(){

   const char *oddOrEven = "Never odd or even";
   const char *nthCharPtr = &oddOrEven[5];//&(*(oddOrEven + 5))
   cout<<*nthCharPtr<<endl;//( )

   nthCharPtr = &(*(oddOrEven + 3));
   cout<<*nthCharPtr<<endl; // e

   const char **pointPtr = &nthCharPtr;
   cout<<**pointPtr<<endl; // e
   cout<<pointPtr<<endl;

   nthCharPtr++;
   cout<<*nthCharPtr<<endl; // r
   cout<<**pointPtr<<endl;  // r

   cout<<nthCharPtr - oddOrEven<<endl;


   cout<<endl;
   const char *nombre = "pedro";
   const char *pesimo = &nombre[2];
   cout<<*pesimo<<endl;

   const char *pesimo2 = &(*(nombre + 2));
   cout<< *pesimo2 <<endl;

   pesimo++;
   cout<<*pesimo<<endl;

   const char **p = &pesimo;
   cout<<**p<<endl;

   cout<<endl;
   pesimo++; // actuakmente apuntando a 'o'
   cout<<**p<<endl;
   cout<<*pesimo<<endl;


   cout << pesimo - nombre<<endl;
   return 0;
}
