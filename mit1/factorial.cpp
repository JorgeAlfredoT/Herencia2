#include<iostream>
using namespace std;

int main(){

   unsigned short number;
   cout<<"enter a number: "; cin>>number;
   cout<<"the factorial of "<<(short)number<<" es: "<<endl;
   int acum=1;
   if(number>10){
      for(;number>0;acum *= number--);
      cout<<acum<<endl;
   }
   else
      switch(number){
         case 1 :
            cout<<"1"<<endl;
            break;
         case 2 :
            cout<<"2"<<endl;
            break;
         case 3:
            cout<<"6"<<endl;
            break;
         case 4 :
            cout<<"24"<<endl;
            break;
         case 5 :
            cout<<"120"<<endl;
            break;
         case 6:
            cout<<"720"<<endl;
            break;
         case 7:
            cout<<"5040"<<endl;
            break;
         case 8:
            cout<<"40320"<<endl;
            break;
         case 9:
            cout<<"362880"<<endl;
            break;
         case 10:
            cout<<"3628800"<<endl;
            break;

      }

   return 0;
}
