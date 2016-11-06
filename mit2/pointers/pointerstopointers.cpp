#include<iostream>
using namespace std;

void setstring(string **);

int main(){

   string *str;
   setstring(&str);
   cout<<*str<<endl;

   return 0;
}

void setstring(string **strptr){
   int x;
   cin>>x;
   if(x<0)
      *strptr = "NEGATIVO";
   else
      *strptr = "POSITIVO";
}
