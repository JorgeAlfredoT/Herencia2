#include<iostream>
using namespace std;

void fff(int *arr,int){
   cout<<*(arr+1)<<endl;
}

int main(){

   int arr[]={9,8,7};
   fff(arr,3);

   return 0;
}
