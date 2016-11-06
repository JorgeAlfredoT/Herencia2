//variable ocales y globales.
#include<iostream>
using namespace std;
float v;
int main(){
   int v=5;
   ::v = 78;
   cout<<"variable local: "<<v<<endl;
   cout<<"variable global: "<< ::v <<endl;

   return 0;
}
