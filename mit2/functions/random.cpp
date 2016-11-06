#include<iostream>
#include<cstdlib> // aca define rand() srand() RAND_MAX
#include<ctime>  // define  time()
using namespace std;

void prueba_random();
int aleatorio(); // entre 1-10


int main(){

   prueba_random();
   aleatorio();

   return 0;
}

void prueba_random(){
   srand(time(0));
   short x=rand();
   long y= rand();
   cout<<"un short aleatorio: "<<x<<endl;
   cout<<"un long aleatorio: "<<y<<endl;

}

int aleatorio(){
   srand(time(0));
   short x = 1 + rand() % (11-1);
      cout<<"numeo aleatorio entre 1-10  : "<<x<<endl;;
}
