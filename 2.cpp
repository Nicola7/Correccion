#include <iostream>
#include <cmath>
template <class U, class V>
U funcion (U x, V c);
double derivada (double w, int c); 
double raiz (double x,int c);
double raiz_1(int x);
void raiz_2(int c);
int main (void){
  int array [8];
  array [0]=-2;
  array [1]=0;
  array [2]=1;
  array [3]=2;
  array [4]=3;
  array [5]=4;
  array [6]=8;
  array [7]=100;
  for (int ii=0;ii<=7;++ii){
    raiz_2(array[ii]);
  }
  return 0;
}

  template <class U,class V>
U funcion (U x,V c){
  U y=std::exp(x);
  y=y+(c*(x*x*x));
  y-=5;
  return y;
}

double derivada (double w,int c) {
  double z=std::exp(w);
  z=z+(3*c*(z*z));
  return z;
}
double raiz (double x,int c){
  double y= funcion <double,int> (x,c);
  y=(y)/derivada(x,c);
  y=y*(-1);
  y=y+x;
  return y;
}
double raiz_1(int x,int c){
  double z=raiz(0,c);
  for (int iii=1;iii<=x;++iii){
    z=raiz(z,c);
  }
  return z;
}
void raiz_2(int c){
  for (int ii=1;ii<=1000;++ii){
    double y=raiz_1(ii,c);
    double s= y-raiz_1(ii-1,c);
    if (std::fabs(s)<0.0001){std::cout<<c<<'\t'<<y<<std::endl;
      break;
    }
  }
}
