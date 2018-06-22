#include"number.h"
#include<iostream>
using namespace std;


RealNumber::RealNumber(float x=0)
{
    r=x;
}

RealNumber RealNumber::add(const RealNumber& other)
{
   return RealNumber(r+other.r);
}

void RealNumber::print()
{
    cout<<r<<endl;
}

RealNumber RealNumber::mul(const RealNumber& other)
{
  return RealNumber(r*other.r);
}

ComplexNumber::ComplexNumber(float u=0,float v=0)
{
    a=u;
    b=v;
}


ComplexNumber ComplexNumber::add(const  ComplexNumber&other)
{
    return ComplexNumber(a+other.a,b+other.b);
}
ComplexNumber ComplexNumber::mul(const  ComplexNumber&other)
 {
    return ComplexNumber(a*other.a-b*other.b,a*other.b+b*other.a);
 }
void ComplexNumber::print()
{
    cout<<a<<"+"<<b<<"i"<<endl;
}


