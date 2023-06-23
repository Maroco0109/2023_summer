/*
��ü ���� ��, ������ �Լ��� ����Ǵ� ��ó��, ��ü �Ҹ� �� �Ҹ��� �Լ��� ����ȴ�.
��ü�� �Ҹ��� �� ���� �Ҵ���� �޸𸮸� ��ȯ�ϰų�, ������ �����ϰ� �ݴ� �� ��ü�� �Ҹ� ���� �ʿ��� ��ġ�� �ϵ��� ���� ����
*/
#include <iostream>

class Circle{
public:
    int radius;
    double getArea();
    Circle();
    Circle(int r);
    ~Circle();  //�Ҹ��� ����
};

//���� ������
Circle::Circle() : Circle(1){ }
//Ÿ�� ������
Circle::Circle(int r){ radius = r; }
//�Ҹ���
Circle::~Circle(){ std::cout<<radius<<" radius Circle destructed."<<'\n';}

double Circle::getArea(){ return 3.14*radius*radius; }

int main(){
    Circle donut;
    double donut_area = donut.getArea();
    std::cout<<donut_area<<'\n';
    Circle pizza(30);
    double pizza_area = pizza.getArea();
    std::cout<<pizza_area<<'\n';

    return 0;   //main �Լ� ���� ��, �Ҹ��ڰ� �����Ǿ� �Լ��� ���ÿ� ������ ��ü �Ҹ�
}