//inversa de un array con la aritmetica de punteros
#include<iostream>
#define LENGTH sizeof(arr)/sizeof(*arr)
using namespace std;

void printArray(int *, int);
void inversa(int *, int);


int main(){

   int arr[]={9,8,7,6,5};
   printArray(arr,LENGTH);
   inversa(arr,LENGTH);
   printArray(arr,LENGTH);

   return 0;
}

void printArray(int *arr, int n){
   for(int e = 0 ; e<n ; e++)
      cout<<arr[e]<<" ";
   cout<<endl;
}

void inversa(int *arr, int n){
   for(int e = 0 ; e < n/2 ; e++){
      int temp = *(arr +e);
      *(arr + e) = *(arr + n-e-1);
      *(arr + n-e-1) = temp;
   }
}
