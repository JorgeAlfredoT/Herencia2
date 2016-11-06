#include<iostream>
#include<cstdlib>
#include<ctime>
#include<cmath>
using namespace std;
//RAND_MAX = 2147483647

float hallarPi(int);

int main(){

   int totalPuntos;
   cout<<"Total de puntos: "; cin>>totalPuntos;
   cout<<hallarPi(totalPuntos)<<endl;

   return 0;
}

float hallarPi(int totalPuntos){
   srand(time(0));
   int aciertos = 0 , e=0 ;
   while( e++ <= totalPuntos){
      float x = rand() / (float) RAND_MAX;
      float y = rand() / (float) RAND_MAX;
      float punto = sqrt(x*x + y*y);

      if(punto < 1)
         aciertos ++;
   }
   return (4.0 * aciertos/totalPuntos);

}

/*

     NUMERO aciertos  =  AREA circulo  =  PI(radio/2) ^ 2                    4 x NUMERO aciertos
     _______________     ____________     _____________         ==>    PI =  ____________________

     NUMERO totales      AREA cuadrado    radio ^ 2                              NUMERO totales




*/
