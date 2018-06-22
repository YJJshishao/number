

#ifnd
 NUMBER_H
#define NUMBER_H
#include<iostream>
#include<iostream>
using namespace std;

class Number
{
public:
    virtual void print()=0;

};

class RealNumber:public Number
{
public :
    RealNumber(float);
    virtual void print();
    RealNumber add(const RealNumber&);
    RealNumber mul(const RealNumber&);
    float r;

};


class ComplexNumber : public Number
{
public:
    ComplexNumber(float,float);
    ComplexNumber add(const ComplexNumber&);
    ComplexNumber mul(const ComplexNumber&);
    virtual void print();
    float a;
    float b;
};








#endif 
