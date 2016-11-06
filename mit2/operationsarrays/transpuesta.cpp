//matriz cuadrada
#include<iostream>
#define LENGTH 3
#define WIDTH 3
using namespace std;


void printMatrix(int mtx[LENGTH][WIDTH]);
void transpuesta(int mtx[LENGTH][WIDTH], int mtx2[LENGTH][WIDTH]);
void transpuesta2(int mtx[LENGTH][WIDTH]);

int main(){
   int matrix[LENGTH][WIDTH]={{1,2,3},{4,5,6},{7,8,9}};
   int matrix3[LENGTH][WIDTH]={{10,20,30},{40,50,60},{70,80,90}};
   int matrix2[LENGTH][WIDTH];
   printMatrix(matrix);
   transpuesta(matrix,matrix2);
   printMatrix(matrix2);
   cout<<endl;
   printMatrix(matrix3);
   transpuesta2(matrix3);
   return 0;
}

void printMatrix(int mtx[LENGTH][WIDTH]){
   for(int e=0 ; e<LENGTH; e++){
      for(int j=0 ; j<WIDTH; j++){
            cout<<mtx[e][j]<<" ";
      }
      cout<<endl;
   }
}

void transpuesta(int mtx[LENGTH][WIDTH], int mtx2[LENGTH][WIDTH]){
   for(int e=0 ; e<LENGTH; e++){
      for(int j=0 ; j<WIDTH; j++){
            mtx2[e][j]=mtx[j][e];
      }
   }
   cout<<endl;
}

void transpuesta2(int mtx[LENGTH][WIDTH]){
   int mtx2[LENGTH][WIDTH];
   for(int e=0 ; e<LENGTH; e++){
      for(int j=0 ; j<WIDTH; j++){
            mtx2[e][j]=mtx[j][e];
      }
   }
   cout<<endl;

   for(int e=0 ; e<LENGTH; e++){
      for(int j=0 ; j<WIDTH; j++){
            cout<<mtx2[e][j]<<" ";
      }
      cout<<endl;
   }
   cout<<endl;


}


void transpuesta[]
