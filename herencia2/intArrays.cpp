#include<iostream>
using namespace std;

class IntegerArray{
public:
   int *data;
   int size;
   IntegerArray(int siz){
      data = new int[siz];
      this->size=siz;
   }
   IntegerArray(IntegerArray &o){
      data = new int[o.size];
      size=o.size;
      for(int e=0;e<size;e++){
         data[e]=o.data[e];
      }
   }
   ~IntegerArray(){
      delete[] data;
   }
};

int main(){

   IntegerArray ia1(3);
   ia1.data[0]=4;
   ia1.data[1]=5;
   if(true){
      IntegerArray b = ia1;
   }
   cout<<ia1.data[0]<<  endl;
   cout<<ia1.data[1]<<endl;

   return 0;
}
