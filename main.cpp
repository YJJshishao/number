nclude"number.h"
#include<iostream>
using namespace std;

int main()

{RealNumber a(3.4);
RealNumber b(1.2);
RealNumber c=a.add(b);
RealNumber d=a.mul(b);
c.print();
d.print();
ComplexNumber x(3,4);
ComplexNumber y(5,7);
ComplexNumber z=x.add(y);
ComplexNumber w=x.mul(y);
z.print();
w.print();


}

