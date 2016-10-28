#include <iostream>
#include<cmath>
#include<iomanip>
double funcion (const double & x);
double derivadan(const double &x,const double &h);
double derivada (const double &x);
double diferencia (const double &x,const double &h);
int main (void){
  for(int ii=1;ii<=10;++ii){
    int z=(-1)*(ii);
    double h=std::pow(10,z);
    double g=diferencia(4,h);
    std::cout<<std::fixed;
    std::cout<<std::setprecision(10);
    std::cout<<h<<'\t'<<g<<'\n';
  }
  return 0;
}
double funcion (const double &x){
  double y=std::sin(x);
  y*=4;
  y*=x;
  y+=7;
  return y;
}
double derivadan(const double &x,const double &h){
  double w=(x+h);
  w=funcion(w);
  w-=funcion(x);
  w/=h;
  return w;
}
double derivada (const double &x){
  double s=std::sin(x);
  double c=std::cos(x);
  c*=x;
  s+=c;
  s*=4;
  return s;
}
double diferencia (const double &x,const double &h){
  double dt=derivada (x);
  double dn=derivadan(x,h);
  dn-=dt;
  dn=std::fabs(dn);
  double  dna=std::fabs (dt);
  dn/=dna;
  return dn;
}
