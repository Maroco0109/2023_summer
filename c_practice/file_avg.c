#include<stdio.h>
int main(){
    FILE* ip,*op;
    char name[20];
    int kor, eng, math,sum;
    double avg;
    ip=fopen("C:\\Users\\user\\Desktop\\examples\\c++\\2023_summer\\c_practice\\files\\kor_eng_math.txt","r");
    op=fopen("C:\\Users\\user\\Desktop\\examples\\c++\\2023_summer\\c_practice\\files\\result.txt","w");
    if(!ip||!op){printf("���� �б� �Ǵ� ���� ����!\n"); return 0;}
    for(;fscanf(ip,"%s %d %d %d",name,&kor,&eng,&math)>0;){
        sum=kor+eng+math;
        avg=sum/3.;
        fprintf(op,"�̸�: %s ����: %d ����: %d ����: %d �ջ�: %d ���: %lf\n",name,kor,eng,math,sum,avg);
        fprintf(stdout,"�̸�: %s ����: %d ����: %d ����: %d �ջ�: %d ���: %lf\n",name,kor,eng,math,sum,avg);
    }
    fclose(ip),fclose(op);
}