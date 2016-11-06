#include<iostream>
using namespace std;

void printTimes(char *, int);


int main(){
   char nom[]="rimenses";
   printTimes(nom,3);

   return 0;
}

void printTimes(char *nom , int n=1){
   for(int e = 0 ; e<n; e++){
      cout<<nom<<endl;
   }
}
