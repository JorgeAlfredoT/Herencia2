#include<iostream>
using namespace std;


void f ( const int a = 5)
{
std :: cout << a *2 << " \n " ;
}

int z=23;
int main(){

   int arr[]={7,6,8,5,9};
   int *p=arr;
   int *q=&arr[0];
   cout<<*p<<endl;
   cout<<*q<<endl;


   int a=5;
   int *pi=&a;
   cout<<*pi<<endl;

   int **pd = &pi;
   cout<<**pd<<endl<<endl<<endl<<endl;

   f (1) ;
   f(z);
   int b = 3;
   f(b);
   int z = 4;
   f(z);
   f () ;

   return 0;
}
