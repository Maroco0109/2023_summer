// ���� ������ �Է¹����� �������� ����ϴ� �Լ�
#include<stdio.h>
 
 int rev(int n);

 int main(){
    int n;
    scanf("%d",&n);
    printf("%d\n",rev(n));

    return 0;
 }

 int rev(int n){
    int result = n;
    int tmp = 0;
    while(result){
        tmp = tmp*10 + result%10;
        result = result/10;
    }

    return tmp;
 }