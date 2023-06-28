#include <iostream>
#include <vector>

class Circle{
    int radius;
public:
    Circle() {this->radius = 1;}
    Circle(int r) {this->radius = r;}
    double getArea();
};

double Circle::getArea(){
    return 3.14*radius*radius;
}

int main(){
    //Circle ��ü �迭 ����
    std::vector<Circle> circleArray;

    //�迭�� �� ���� ��ü�� ��� ����
    circleArray.emplace(circleArray.begin(), 10);
    circleArray.emplace(circleArray.begin()+1, 20);
    circleArray.emplace(circleArray.begin()+2, 30);

    //�迭�� �� ���� ��ü�� ��� ����
    for(int i = 0; i<3; i++){
        std::cout<<i+1<<"��° Circle�� ����: "<<circleArray[i].getArea()<<'\n';
    }   
}