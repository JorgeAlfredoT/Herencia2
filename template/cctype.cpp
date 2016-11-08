#include<iostream>
#include<cctype>
#include<cstdlib>
using namespace std;


int main(){

   char lista[]="numeros 2";
   char *ps;
   ps=lista;

   int cnum=0;
   int calpha=0;

   for(; *ps != '\0'; ps++){
      if(isalnum(*ps))
         cnum++;
      else if(isalpha(*ps))
         calpha++;
   }
      cout<<"isalnum: "<<cnum<<endl;
      cout<<"isalpha: "<<calpha<<endl;

      //https://es.wikipedia.org/wiki/Ctype.h

   return 0;
}
