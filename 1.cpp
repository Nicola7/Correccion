#include <iostream>
#include <cmath>
template <class U>
U funcion (U x);
double derivada (double w); 
double raiz (double x);
double raiz_1(int x);

int main (void){
  for (int ii=1;ii<=1000;++ii){
    double y=raiz_1(ii);
    double s= y-raiz_1(ii-1);
    if (std::fabs(s)<0.0001){std::cout<<y<<std::endl;
      break;
    }
  }
  return 0;
}
template <class U>
U funcion (U x){
  U y=std::exp(x);
  y=y+(x*x*x);
  y-=5;
  return y;
}

double derivada (double w) {
  double z=std::exp(w);
  z=z+(3*(z*z));
  return z;
}
double raiz (double x){
  double y= funcion <double> (x);
  y=(y)/derivada(x);
  y=y*(-1);
  y=y+x;
  return y;
}
double raiz_1(int x){
  double z=raiz(0);
  for (int iii=1;iii<=x;++iii){
    z=raiz(z);
  }
  return z;
}
