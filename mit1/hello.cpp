#include<iostream>
using namespace std;

void hellofor(const char *name, int n){
   for(int e=0;e<n;e++)
      cout<<name<<endl;
}

void hellowhile(const char *name, int n){
   int e=0;
   while(e++ != n)
      cout<<name<<endl;
}

void hellodowhile(const char *name, int n){
   int e=1;
   do{
      cout<<name<<endl;
   }
   while(e++ != n);
}

int main(){

   const char *name = "rimenses";
   hellofor(name,5);
   cout<<endl;
   hellowhile(name,2);
   cout<<endl;
   hellodowhile(name,3);

   return 0;
}
