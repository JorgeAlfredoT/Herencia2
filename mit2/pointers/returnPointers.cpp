#include<iostream>
#include<cstdlib> // rand()
#include<ctime> // time()
using namespace std;

int *getRandNumPtr(){
   srand(time(0));
   int x = 11 + rand() % (21-11);
   int *p; // c¿se crea un puntero para que aplunte a x
   p=&x;
   return   p;
}

int main(){
   int *x = getRandNumPtr();
   cout<<*x<<endl;

   return 0;
}
