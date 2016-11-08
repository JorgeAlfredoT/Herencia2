/*
   En este codigo insertaremos datos de tipo que declaremos mediate una plantilla
   luego mediante un iterador recoremos  y lo imprimimos
   (el iteradro funciona de manera smilra que una puntero)
   line 31-
   hace la busqyeda ninaria
   se le da el primer +elemento
   elultimo
   y le elmento que se desea buscar
   apartir de la linea 43 se imprime un array modificado
*/
#include<iostream>
#include<set> // conjuntos
#include<algorithm> //algoritmos
using namespace std;


void printArray(const int arr[], const int len){
      for(int e=0;e<len ; e++)
         cout<<" "<<arr[e]<<" ";
      cout<<endl;
}


int main(){
///////////////////////////////////////////////////////////////////////////////////////
   set<int> iconj;
   iconj.insert(3);
   iconj.insert(4);
   iconj.insert(5);
   iconj.insert(6);
   iconj.insert(77);
   iconj.insert(7.34); // como hemos declarado int este pasara como 7 nomas
   iconj.insert(8);
   iconj.insert(9);
   iconj.insert(10);

   cout<<"iconj contains: "<<endl;
   set<int>::iterator pos;
   for( pos = iconj.begin() ; pos != iconj.end() ; pos++ ) // ya lo pasa ordenado
      cout<<" "<<*pos<<endl;
/////////////////////////////////////////////////////////////////////////////////////////7
   // int search;
   // cout<<"elemento a buscar: ";
   // cin>>search;
   // if(  binary_search( iconj.begin(), iconj.end(),search ) )
   //    cout<<"Found "<<search<<endl;
   // else
   //    cout<<"Did not find !!!! "<<endl;
/////////////////////////////////////////////////////////////////////////////////////////777

   int arr[]={7,5,3,1,2,4,6};
   printArray(arr,7);

   sort(arr,arr+7);
   printArray(arr,7);

   rotate(arr,arr+5,arr+7);
   printArray(arr,7);

   reverse(arr,arr+7);
   printArray(arr,7);


   return 0;
}
