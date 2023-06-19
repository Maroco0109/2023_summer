#include <iostream>

class Circle{
public:
    int radius;
    Circle();
    Circle(int r);
    ~Circle();
    double getArea();
};
Circle::Circle() : Circle(1){}
Circle::Circle(int r){radius = r; std::cout<<"반지름이 "<<radius<<"인 원 생성"<<std::endl;}
Circle::~Circle(){std::cout<<"반지름이 "<<radius<<"인 원 소멸"<<std::endl;}
double Circle::getArea() {return 3.14*radius*radius;}

Circle globalDonut(1000);
Circle globalPizza(2000);

void f(){
    Circle fDonut(100);
    Circle fPizza(200);
}

int main(){
    Circle maindonut;
    Circle mainpizza(30);
    f();
}