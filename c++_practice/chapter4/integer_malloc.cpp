#include <iostream>

int main(){
    //int Ÿ�� 1�� �Ҵ�, ũ�� ���x �̹Ƿ� integer ũ�⸸ŭ �Ҵ�
    int* p;
    p = new int;

    //p�� NULL�� ���, �޸� �Ҵ� ����
    if(!p){
        std::cout<<"Cannot allocate memory."<<'\n';
        return 0;
    }

    //�Ҵ� ���� ���� ������ �� �Է�
    *p = 5;
    //�Ҵ� ���� ���� �������� �� �б�
    int n = *p;
    
    std::cout<<"*p = "<<*p<<'\n';
    std::cout<<"n = "<<n<<'\n';

    //�Ҵ�޾Ҵ� �޸� ��ȯ
    delete p;
}