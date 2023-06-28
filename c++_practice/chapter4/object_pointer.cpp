#include <iostream>

class Circle{
    int radius;
public:
    Circle(){ radius = 1; }
    Circle(int r){radius = r;}
    double getArea();
};
double Circle::getArea(){
    return 3.14*radius*radius;
}
int main(){
    Circle donut;
    Circle pizza(30);

    //��ü �̸����� ��� ����
    std::cout<<donut.getArea()<<'\n';

    //��ü �����ͷ� ��� ����
    Circle *p;                          //��ü�� ���� ������ ���� ����
    p = &donut;                         //p�� donut ��ü�� �ּ� ����
    std::cout<<p->getArea()<<'\n';      //donut�� getArea() ȣ��. �����ͷ� ��ü ��� �Լ� ȣ��
    std::cout<<(*p).getArea()<<'\n';    //donut�� getArea() ȣ��

    p = &pizza;
    std::cout<<p->getArea()<<'\n';      //pizza�� getArea() ȣ��
    std::cout<<(*p).getArea()<<'\n';    //pizza�� getArea() ȣ��
}