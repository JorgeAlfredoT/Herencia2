#include<iostream>
#define len sizeof(arr)/sizeof(*arr)
using namespace std;

void calcular(const int *arr,int &media,int &maximo,int &minimo,int n){
   for(int e=1;e<n;e++){
      if(arr[e]>maximo)
         maximo=arr[e];
      if(arr[e]<minimo)
         minimo=arr[e];
   }
   media=maximo-minimo;
}

int main(){
   const int arr[]={1,2,3};
   int media=0, maximo=arr[0], minimo=arr[0];
   calcular(arr,media,maximo,minimo,3);
   cout<<"max: "<<maximo<<endl;
   cout<<"min: "<<minimo<<endl;
   cout<<"media: "<<media<<endl;
   return 0;
}
