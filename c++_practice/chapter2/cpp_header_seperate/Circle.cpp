#include <iostream>
#include "circle.h"

Circle::Circle(){
    radius = 1;
    std::cout<<radius<<"�� �������� �� ����"<<'\n';
}
Circle::Circle(int r){
    radius = r;
    std::cout<<radius<<"�� �������� �� ����"<<'\n';
}
double Circle::getArea(){
    return 3.14*radius*radius;
}