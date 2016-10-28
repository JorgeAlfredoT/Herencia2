//el uso del this ----------- el this es propio delas clases
#include<iostream>
using namespace std;

class Number{
public:
   int val;
   Number(int);
   ~Number();
   void setN(int);
   void getN();
};


Number::Number(int n=0){
   this->val=n;
}
Number::~Number(){
   ;
}
void Number::setN(int n){
   this->val=n;
}
void Number::getN(){
   cout<<val<<endl;
}
int main(){

   Number n1;
   n1.getN();
   n1.setN(8);
   n1.getN();
   return 0;
}
