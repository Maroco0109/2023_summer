//calculator for celcius and fahrenheit

#include <stdio.h>

int main(){
    double degree;
    char cel;

    //input test 36.5c or 97.7f
    printf("�µ�: ");
    scanf("%lf%c",&degree,&cel);

    //���� �µ��� ���� ��� ȭ�� �µ��� ��ȯ
    if(cel=='c'||cel=='C')
        printf("��ȯ: %.2lff\n",(degree*9/5.)+32.);
    //ȭ�� �µ��� ���� ��� ���� �µ��� ��ȯ
    else if(cel=='f'||cel=='F')
        printf("��ȯ: %.2lfc\n",(degree-32)*5/9.);
    //�ǵ����� ���� �Է°� �Է� �� ��µǴ� ����
    else
        printf("�߸��� �Է°�.");

    return 0;
}