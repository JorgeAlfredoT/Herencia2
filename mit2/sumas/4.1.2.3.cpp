#include<iostream>
using namespace std;

int suma(const int a, const int b){return a+b;}
int suma(const int a, const int b, const int c){return a+b+c;}
int suma(const int a, const int b, const int c, const int d){return a+b+c+d;}
double suma(const double a, const double b){return a+b;}
int sumaDiver(const int a, const int b, const int c=0, const int d=0){return a+b+c+d;} // c y d parametros por defecto.
int sumaLlena(int *,int);
int sumaLlena2(int *, int);
int main(){
   cout<<suma(3,4,3,2)<<endl;
   cout<<suma(1.0,2.0)<<endl;
   cout<<"\n"<<sumaDiver(1,2)<<endl;

   int arr[]={1,2,3,4,5};
   cout<<sumaLlena(arr,5)<<endl;
   cout<<sumaLlena2(arr,5)<<endl;
   return 0;
}

int sumaLlena(int *arr,int cant){ // bucle
   int e=0,sum=arr[0];
   while(e++<cant)
      sum += arr[e];
   return sum;
}

int sumaLlena2(int *arr, int cant){ // forma recursiva
   int suma;
   if (cant==1)
      return arr[0];
   else
      suma = arr[0] + sumaLlena(arr + 1 ,cant-1);
   return suma;
}

/*
sumaLlena ( [9,8,7] , 3)
suma = 9 + sumaLlena( [8,7] , 2 ) // 24
            suma = 8 + sumaLlena( [7] , 1 ) // 15
                           7
*/
