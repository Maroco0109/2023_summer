//if practice. condition  -> true or false -> output

#include<stdio.h>

int main(){
    int number;
    printf("������ �Է��Ͻÿ�: ");
    scanf("%d",&number);
    //1. number < 0
    if(number<0)
        printf("�����Դϴ�.\n");
    else
        printf("����Դϴ�.\n");
    //2. not(number >= 0)
    if(!(number>=0))
        printf("�����Դϴ�.\n");
    else
        printf("����Դϴ�.\n");
    //3. number >= 0
    if(number>=0)
        printf("����Դϴ�.\n");
    else
        printf("�����Դϴ�.\n");
    //4. not(number >= 0)
    if(!(number<0))
        printf("����Դϴ�.\n");
    else
        printf("�����Դϴ�.\n");

    return 0;
}