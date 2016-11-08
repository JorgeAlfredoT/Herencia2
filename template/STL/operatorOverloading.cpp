#include<iostream>
using namespace std;

struct Moneda{
   int dolares;
   int centavos;

   Moneda operator+(const Moneda o){
      Moneda tmp={0,0};
      tmp.centavos = centavos + o.centavos;
      tmp.dolares  = dolares + o.dolares;
      if(tmp.centavos>=100){
         tmp.dolares += 1;
         tmp.centavos -= 1;
      }
      return tmp;
   }

};

ostream& operator<<(ostream &output, const Moneda &o){
   output<<"$"<<o.dolares<<"."<<o.centavos;
   return output;
}

int main(){

   Moneda a={2,50};
   Moneda b={1,30};
   Moneda c=a+b;
   cout<<c<<endl;
   return 0;
}
