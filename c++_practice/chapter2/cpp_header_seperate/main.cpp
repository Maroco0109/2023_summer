#include <iostream>
#include "circle.h"

int main(){
    Circle donut;
    double donut_area = donut.getArea();
    std::cout<<"������ ������ "<<donut_area<<'\n';

    Circle pizza(30);
    double pizza_area = pizza.getArea();
    std::cout<<"������ ������ "<<pizza_area<<'\n';
}