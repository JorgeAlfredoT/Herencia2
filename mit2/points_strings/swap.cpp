#include<iostream>
using namespace std;

void swap(int *, int *);
void swap2(int &, int &);
void swap3(int ** ,int **);

int main(){

   int a=3, b=4;
   cout<<"a = "<<a<<"  b = "<<b<<endl;
   swap(&a,&b);
   cout<<"a = "<<a<<"  b = "<<b<<endl<<endl;


   int c=6, d=8;
   cout<<"c = "<<c<<"  d = "<<d<<endl;
   swap(c,d);
   cout<<"c = "<<c<<"  d = "<<d<<endl<<endl;


   int e=10, f=20;
   int *pe=&e, *pf=&f;
   cout<<"e = "<<e<<"  f = "<<f<<endl;
   swap(&e,&f);
   cout<<"e = "<<e<<"  f = "<<f<<endl;



   return 0;
}

void swap(int *a, int *b){
   int temp = *a;
   *a = *b;
   *b = temp;
}

void swap(int &a, int &b){
   int temp;
   temp=a;
   a = b;
   b = temp;
}
void swap3(int **a, int **b){
   int *temp = *a;
   *a = *b;
   *b = temp;

}
