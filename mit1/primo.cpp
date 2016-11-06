#include<iostream>
using namespace std;

void primosHasta(int n);
bool isPrimo(int);

int main(){

   primosHasta(20);

   return 0;
}

bool isPrimo(int n){
   int e=1,cont=0;
   while(e<=n){
      if(n%e == 0)
         cont++;
         e++;
   }
   if(cont==2)
      return true;
   return false;
}

void primosHasta(int n){
   for(int e = 0 ; e<n; e++){
      if(isPrimo(e))
      cout<<e<<" ";
   }
   cout<<endl;
}
