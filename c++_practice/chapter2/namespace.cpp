#include<iostream>

double area(int r);
double area(int r){
    return 3.14*r*r;
}

int main(){
    int n = 3;
    char c = '#';
    /*
    namespace: c++ ���α׷��� �������� �̸�(identifier)�� �浹�ϴ� �̸��浹�� ���� ���� ����
    Ŭ����, ���, ����, �Լ��� �̸��� �ߺ��� �� ����
    std�� c++ ǥ�� ���̺귯���� ����� �̸��̴�. <iostream> ������ ��� Ŭ����, ��ü, �Լ��� std namespace�� ���´�
    */
    std::cout<<c<<5.5<<'-'<<n<<"hello"<<true<<std::endl;
    std::cout<<"n + 5 = "<<n+5<<'\n';
    std::cout<<"������"<<area(n);
}