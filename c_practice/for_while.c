// for, while �� ����
#include<stdio.h>

int main(){
    //1���� n���� ���� ���ϱ�
    int n;
    //for��
    int sum1 = 0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        sum1 += i;
    printf("%d\n",sum1);

    //while��
    int sum2 = 0;
    int i=0;
    while(i<=n){
        sum2+=i;
        i++;
    }
    printf("%d\n",sum2);
}