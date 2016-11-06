#include<iostream>
using namespace std;


int main(){

   const char *lista[]={"mochila","cartuchera","cuadernos"};
   unsigned short x;
   cout<<"elemento: "; cin>>x;
   if(x<=3)
      cout<<lista[x-1]<<endl;
   else
      cout<<"ERROR--";

   return 0;
}
