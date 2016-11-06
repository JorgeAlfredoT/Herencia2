#include<iostream>
using namespace std;

void print(const int);
void print2(const long &);

int main(){

   long y = 9876;
   int x=5;
   print(x);
   print2(y);

   return 0;
}


void print(const int n){
   //n += 6;// error por que n es const
   cout<<n<<endl;

}

void print2(const long &x){
   cout<<x<<endl;
   cout<<&x<<endl;
}
// cuando declaramos un long ,lo recmendable es pasarlo por referancia
