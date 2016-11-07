#ifndef GEOMETRY_H
#define GEOMETRY_H

class Point{
private:
  int x,y;
public:
  Point(int x=0, int y=0);
  ~Point();
  void setX(const int new_x);
  void setY(const int new_y);
  int getX();
  int getY();
  void printPoint();
};


class PointArray{
private:
  int size;
  Point *data;
  void  resize(int n);
public:
  PointArray();
  ~PointArray();
  PointArray(PointArray &o);
  PointArray(const Point [],const int);
  void printPointArray();
  int getSize();
  void p_back(const Point &);
  void insert(const int, const Point &);
  void remove(const int);
  void clear();
  Point *get(int);
  Point *get(const int) const;

};


#endif
