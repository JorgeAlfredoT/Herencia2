#include <iostream>
#include"geometry.h"
using namespace std;

///////////////////////////////////////Point
Point::Point(int px, int py){
  this->x=px;
  this->y=py;
}
Point::~Point(){
  ;
}
void Point::setX(const int new_x){
  this->x=new_x;
}

void Point::setY(const int new_y){
  this->y=new_y;
}

int Point::getX(){
  return x;
}

int Point::getY(){
  return y;
}
void Point::printPoint(){
  cout<<"("<<x<<","<<y<<")"<<endl;
}
////////////////////////////////////PointArray
void PointArray::resize(int n){
   //Point pnu(0,0);
   size = n;
   Point *newpoints = new Point[n];
   for(int e = 0; e < n; e++){
      // if(e == n - 1)
      //    newpoints[e]=pnu;
      // else
         newpoints[e] = data[e];
   }
   delete [] data;
   data=newpoints;
}


PointArray::PointArray(){
  this->size=0;
  this->data= new Point[size];
}
PointArray::~PointArray(){
  delete [] data;
}

PointArray::PointArray(PointArray &o){
  this->size=o.size;
  this->data=new Point[o.size];
 }

PointArray::PointArray(const Point gg[],const int nuevo_size){
  this->size=nuevo_size;
  this->data= new Point[nuevo_size];
  int e=0;
  for(;e<nuevo_size;e++){
    this->data[e]=gg[e];
  }
}

int PointArray::getSize(){
   return size;
}
void PointArray::printPointArray(){
   int e=0;
   for (Point *p=data ;e<size ; p++,e++){
      cout<<"("<<p->getX()<<","<<p->getY()<<")  ";
   }
   cout<<endl;
}

void PointArray::p_back(const Point &anh){ // const Point &p
   resize(size + 1);
   //cout<<size<<endl; // size actualizado
   Point *p = data;
   p[size - 1 ] = anh;
}

void PointArray::insert(const int position, const Point &anh){
   resize(size+1);
   for (int e = size-1; e > position ; e--) {
        data[e] = data[e - 1];
    }
    data [position] = anh ;
}

void PointArray::remove(const int position){
   for(int e = 0 ; e<size ;e++){
      if(e != position)
         continue;
      else if (e == position)
         data[e] = data[e+1];
         break;
   }
   for(int e = position +1 ; e<size ;e++){
      data[e]=data[e+1];
   }
   resize(size-1);
}

void PointArray::clear(){
   resize(0);
}




int main(){
  PointArray *pa;
  Point p1(1,1);
  Point p2(2,2);
  Point p3(3,3);
  Point p4(4,4);
  Point p5(5,5);
  Point p6(6,6);
  Point lp[]={p1,p2,p3,p4};
  PointArray listapoints(lp,4);
  listapoints.printPointArray();

  listapoints.p_back(p5);
  listapoints.printPointArray();

  listapoints.insert(3,p6);
  listapoints.printPointArray();

  listapoints.remove(2);
  listapoints.printPointArray();

  cout<<listapoints.getSize()<<endl;
  listapoints.clear();
  cout<<listapoints.getSize()<<endl;


  return 0;
}
