#include<iostream>

// using namespace std;
//////////////////////////////////////////////////////////

template<typename T>

class Points{
private:
   T x,y;
public:
   Points(): x(0), y(0){}
   Points(T a, T b);
   ~Points(){}
   Points(const Points &o): x(o.x), y(o.y) {}
   void setX(const T);
   void setY(const T);
   T getX()const;
   T getY()const;
   //sobrecarga de operadores
   Points operator+(const Points<T>);
   Points operator-(const Points<T>);

   friend ostream &operator << (ostream &output,const Points &ppi){
       output << "(" << pii.x << ", " << pii.y << ")";
       return output;
   }

   friend istream &operator >> (istream &input, const Points &pii){
       cout << "Introducir valores para ( x, y) :";
       input >> pii.x >> pii.y;
       return input;
   }


};


///////////////////////////////////////////////////////////
template<typename T>
Points<T>::Points(T a, T b) : x(a), y(b){}

template<typename T>
void Points<T>::setX(const T newx){
   x=newx;
}

template<typename T>
void Points<T>::setY(const T newy){
   y=newy;
}

template<typename T>
T Points<T>::getX()const {
   return x;
}
template<typename T>
T Points<T>::getY()const{
   return y;
}

template <typename T>
Points<T> Points<T>::operator+(const Points p){
  Points cual;
  cual.x = x + p.x;
  cual.y = y + p.y;
  return cual;
}

template<typename T>
Points<T> Points<T>::operator-(const Points p){
   Points cual;
   cual.x = x - p.x;
   cual.y = y - p.y;
   return cual;
}
