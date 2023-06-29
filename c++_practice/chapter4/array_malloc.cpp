// TYPE* �����ͺ��� = new TYPE [ARRAY SIZE];    �迭�� ���� �Ҵ�
// delete [] �����ͺ���;                        �迭�� �޸� ��ȯ
#include <iostream>

int main(){
    std::cout<<"�Է��� ������ ����: ";;
    int n;
    
    //������ ���� �Է�
    std::cin>>n;
    if(n<=0)
        return 0;

    //n���� ���� �迭 ���� �Ҵ�
    int* p=new int[n];
    if(!p){
        std::cout<<"Cannot allocate memory"<<'\n';
        return 0;
    }

    //���� �Ҵ�� �迭�� �� �Է�
    for(int i = 0; i<n; i++){
        std::cout<<i+1<<"��° ����: ";
        std::cin>>p[i];
    }

    //�迭�� ��� �� ���� �� ��հ� ���
    int sum = 0;
    for (int i = 0; i < n; i++){
        sum += p[i];
    }
    std::cout<<"Avg = "<sum/n<<'\n';
    
    //�迭 �޸� ��ȯ
    delete [] p;
}