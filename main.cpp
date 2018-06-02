#include <iostream>
#include "complex.h"

int main() {
    complex ob1,ob2;
    cin>>ob1>>ob2;
    std::cout <<ob1<<" "<<ob2<<" "<<ob1+ob2<<" "<<(ob1==ob2)<< std::endl;
    return 0;
}