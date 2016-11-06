#include<iostream>
#include<cstdlib>
using namespace std;

void printNum(int); // proble 1
void printNum2(int); // problem 2
void dobleNumero(int &);// problema 3
int diferencia(const int, const int);
int suma(const int ,const int);


int main(){

   printNum(35);

   int e =10;
   printNum2(e);

   int r=32;
   int *p;
   p=&r;
   dobleNumero(*p);
   cout<<"doble: "<<r<<endl;

   cout<<"diferencia: "<<diferencia(23,27)<<endl;

   cout<<"suma: "<<suma(1,suma(2,3))<<endl;
///////////////////////////////////////////////////////////
const int ARRAY_LEN = 10;
int arr[ARRAY_LEN] ={10};
int *we=arr;
int *y = (arr + (ARRAY_LEN -1));

cout << *we<<endl;
cout<<*y<<endl;


///////////////////////////////////////////////////////////

   return 0;
}

void printNum(int number){
   cout<<"num: "<<number<<endl;
}

void printNum2(int number){
   cout<<"num2: "<<number<<endl;
}

void dobleNumero(int &num){
   num *= 2;
}

int diferencia(const int a, const int b){
   int dif=abs(a-b);
   return dif;
}

int suma(const int a, const int b){
   return a+b;
}



// sol 1: flata prototipo --- funcion encima del main.
//sol 2: falta parametro en la funcion --- la coma {}; == error
// --> solucion : funcion va  de prototipo
// sol 3: paso por referencia
// sol 4: falta retornar
//sol 5: areglar en el main
//sol 6: parentesis.
