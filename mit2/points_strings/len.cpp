#include<iostream>
using namespace std;

int len(char *);


int main(){

   char cadena[]="numeros";
   cout<<len(cadena)<<endl;

   return 0;
}

int len(char *cad){
   int len=0;
   while(*cad++ != '\0')
      len++;
   return len;
}
