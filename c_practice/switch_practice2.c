// ��, �� �Է� ������ �ش� �⵵ �ش� ���� �ϼ��� ���

#include<stdio.h>
#include<stdbool.h>
int main(){
    int year, month;
    bool isValid = true;

    while (isValid == true){
        printf("����: ");
        scanf("%d",&year);
        printf("��: ");
        scanf("%d",&month);

        switch(month){
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("31 days.\n"); break;
            case 4: case 6: case 9: case 11:
            printf("30 days.\n"); break;
            case 2:
            if((year % 4 == 0)||(year % 4 == 0 && year % 100 == 0 && year % 400 == 0)){
                printf("29 days.\n");
                break;
            }
            else if((year % 4 == 0 && year % 100 == 0)&&(year % 400 != 0)){
                printf("28 days.\n");
                break;
            }
            else{
                printf("28 days.\n");
                break;
            }
            default:
                printf("�߸��� �Է°� �Դϴ�. \n");
                isValid = false;
                break;
        }
    }

    return 0;
}