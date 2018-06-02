//
// Created by Krishna on 02-06-2018.
//

#ifndef COMPLEX_LIBRARY_COMPLEX_H
#define COMPLEX_LIBRARY_COMPLEX_H

#endif //COMPLEX_LIBRARY_COMPLEX_H

//
// Created by Krishna on 22-05-2018.
//
#include <iostream>
#include <cmath>

#ifndef PRACTICE_CLASS_H
#define PRACTICE_CLASS_H

#endif //PRACTICE_CLASS_H

using namespace std;

class complex{
    float real=0,img=0;
public:
    float getReal() const;
    float getImg() const;
    void setReal(float real);
    void setImg(float img);
    inline complex operator+(complex c);
    inline complex operator-(complex c);
    inline complex operator*(complex c);
    inline complex operator/(complex c);
    inline bool operator==(complex c);
    inline friend ostream & operator << (ostream &out, const complex &c);
    inline friend istream & operator >> (istream &in,  complex &c);
};

float complex::getReal() const {
    return real;
}

float complex::getImg() const {
    return img;
}

void complex::setReal(float real) {
    complex::real = real;
}

void complex::setImg(float img) {
    complex::img = img;
}

complex complex::operator+(complex c) {
    complex tmp;
    float rl=this->getReal() + c.getReal();
    float im=this->getImg() + c.getImg();
    tmp.setReal(rl);
    tmp.setImg(im);
    return tmp;
}

complex complex::operator-(complex c) {
    complex tmp;
    float rl=this->getReal()-c.getReal();
    float im=this->getImg()-c.getImg();
    tmp.setReal(rl);
    tmp.setImg(im);
    return tmp;
}

complex complex::operator*(complex c) {
    complex tmp;
    float rl,im;
    rl=((this->getReal())*(c.getReal()))-((this->getImg())*(c.getImg()));
    im=(this->getReal()*c.getImg())+(this->getImg()*c.getReal());
    tmp.setReal(rl);
    tmp.setImg(im);
    return tmp;
}

complex complex::operator/(complex c) {
    complex tmp;
    float x=this->getReal(),y=this->getImg(),a=c.getReal(),b=c.getImg();
    float mod=sqrtf((a*a)+(b*b));
    float rl=(x*a)+(y*b);
    float im=-((x*b)-(y*a));
    tmp.setReal(rl/mod);
    tmp.setImg(im/mod);
    return tmp;
}

bool complex::operator==(complex c) {
    return (this->real==c.real)&&(this->img==c.img);
}

ostream & operator << (ostream &out, const complex &c)
{
    out << c.real<<"+";
    out << c.img << "i";
    return out;
}

istream & operator >> (istream &in,  complex &c)
{
    cout << "Enter Real Part ";
    in >> c.real;
    cout << "Enter Imagenary Part ";
    in >> c.img;
    return in;
}

