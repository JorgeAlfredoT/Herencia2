//probando constructores y destructores.
#include<iostream>
using namespace std;


class Integer{
private:
   int val;
public:
   Integer(int);
   ~Integer();
};

Integer::Integer(int n=0){
   n=val;
   cout<<"default constructor Integer"<<endl;
}
Integer::~Integer(){
   cout<<"default destructor Integer"<<endl;
}


class Newpaper{
private:
   Integer num;
   int res;
public:
   Newpaper(int);
   ~Newpaper();
};


Newpaper::Newpaper(int n=0){
   res=n;
   cout<<"default constructor de newpaper"<<endl;
}

Newpaper::~Newpaper(){
   cout<<"default destructor de newpaper"<<endl;
}

int main(){
   Newpaper n3(56);
   return 0;
}
