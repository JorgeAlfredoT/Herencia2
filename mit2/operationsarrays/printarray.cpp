#include<iostream>
#define LENGTH sizeof(arr)/sizeof(*arr)
using namespace std;

void printArray(int *,int);

int main(){

   int arr[]={9,8,7,6,5};
   printArray(arr,LENGTH);
   return 0;
}

void printArray(int *mtz,int n){
   for(int e=0; e< n; e++){
      if (e < n-1)
         cout<<mtz[e]<<",";
      else
         cout<<mtz[e]<<endl;
   }
}
