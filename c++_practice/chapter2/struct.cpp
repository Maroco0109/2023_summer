//����ü�� Ŭ������ ��������� ����
//����ü�� ����Ʈ ������ public => c������ ȣȯ���� ����

#include <iostream>

struct StructCircle{
private:
    int radius;
public:
    StructCircle(int r){ radius = r; }
    double getArea();
};

double StructCircle::getArea(){
    return 3.14*radius*radius;
}

int main(){
    StructCircle waffle(3);
    std::cout<<waffle.getArea()<<'\n';
}