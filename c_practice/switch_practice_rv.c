// switch ���� ����.
// Ȧ������ ¦������ ����

#include<stdio.h>
#include<stdbool.h>
int main(){
    int n;
    bool isValid = true;
    while (isValid){
        printf("1���� 10 ������ ��: ");
        scanf("%d",&n);
        switch (n){
        case 1: case 3: case 5: case 7: case 9:
            printf("%d is odd number\n",n);
            break;
        case 2: case 4: case 6: case 8: case 10:
            printf("%d is even number\n",n);
            break;
        default:
            isValid = false;
            printf("Input Error!\n");
            break;
        }
    }
}