#include<iostream>
using namespace std;

int div5(int n){
   return  (n%5 == 0)&&(n>0)? n/5 : -1;
}

int div52(int n){
   for(int e=0;e<1;e++)
      if(n%5!=0 && n<0)
         continue;
      else
         return n/5;
}

void div3(int n){
   for(int e=0;e<1;e++){
      if(n<0){
         cout<<"goodBye"<<endl;
         break;
      }
      else
         cout<<n/5<<endl;
   }
}


int main(){

   int x;
   cin>>x;
   div3(x);
   return 0;
}
