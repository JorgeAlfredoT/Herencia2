#include<iostream>
#define length sizeof(arr)/sizeof(*arr)
using namespace std;

void inversa(int *, int);
void printarray(int *, int);

int main(){

   int arr[]={9,8,7,6,5,4};
   printarray(arr,length);
   inversa(arr,length);
   printarray(arr,length);

   return 0;
}


void inversa(int *arr, int n){
   for(int e=0 ; e<n/2 ; e++){
      int temp = arr[e];
      arr[e] = arr[n-e-1];
      arr[n-e-1] = temp;
   }
}

void printarray(int *arr, int n){
   for (int e = 0 ; e<n; e++)
      cout<<arr[e]<<"\t";
   cout<<endl;
}
