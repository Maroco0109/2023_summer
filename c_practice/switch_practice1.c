//c or C �Է½� C cruise ���, b or B �Է½� B battle ���, �� �� ���� �Է� �� �ݺ� �� Ż��

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main(){
    char select;
    bool isValid = true;
    while(isValid){                  //for������ (�ʱ⹮; ���ǹ�; ������) ���¸� ������, ��� ������ ��� ���� ���� ���� == while(1){}
        printf("���ڸ� �Է��ϼ���: ");
        scanf("%c",&select);
        if(select=='\n')
            continue;
        switch (select){
        case 'c':
        case 'C':
            printf("C Cruise\n");
            break;
        case 'b':
        case 'B':
            printf("B Battle\n");
            break;
        default:
            printf("Unexpected Error.\n");
            isValid = false;
            break;                      // bool Ÿ���� isValid ������ default���� false�� �ٲٸ鼭 while�ݺ��� Ż��
            //exit(1);                  //  exit �Լ��� �������� �Լ� ���� ����
        }
    }
}