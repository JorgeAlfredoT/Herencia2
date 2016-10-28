#include<iostream>

using namespace std;


int main(){
   int n;
   cin>>n;
   int *lista = new int[n];
   for(int e=0;e<n;e++){
      cout<<"enter"; cin>>lista[e];
   }
   for(int e=0;e<n;e++)
      cout<<lista[e]<<endl;
   delete[] lista;
   return 0;
}
