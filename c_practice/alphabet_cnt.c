// ������ ���ĺ� ���� �о ���
#include<stdio.h>
void al_count(char c[], int a[]);
int main(){
    FILE* ip,*op;
    ip = fopen("C:\\Users\\MaRoco\\Desktop\\Lecture\\2023_summer\\2023_summer\\c_practice\\file_io\\alphabet.txt","r");
    op = fopen("C:\\Users\\MaRoco\\Desktop\\Lecture\\2023_summer\\2023_summer\\c_practice\\file_io\\result.txt","w");
    if(!ip||!op){printf("%d %d ���� ����� ����",ip, op); return 0;}
    char in[100];
    int cnt[28]={0};
    al_count(in,cnt);
    for(int i = 0;i<28;i++){
        if(cnt[i]>0)
            printf("%c�� %d�� ���\n",i+'a',cnt[i]);
    }
}
void al_count(char c[], int a[]){
    for(int i = 0;*(c+i);i++)
        (*(a+(*(c+i)-'a')))++;
}