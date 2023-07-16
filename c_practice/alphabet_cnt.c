#include<stdio.h>
void cnt_char(char in[],int cnt[]);
int main(){
    FILE*ip,*op;
    char word[100];
    int i;
    int cnt[28]={0};
    ip=fopen("C:\\Users\\user\\Desktop\\examples\\c++\\2023_summer\\c_practice\\files\\words.txt","r");
    op=fopen("C:\\Users\\user\\Desktop\\examples\\c++\\2023_summer\\c_practice\\files\\words_result.txt","w");
    if(!ip||!op){printf("파일 오류!\n");return 0;}
    fscanf(ip,"%s",word);
    cnt_char(word,cnt);
    for(i=0;i<28;i++){
        if(cnt[i]>0)
            fprintf(op,"%c 글자는 %d 번 출력됨\n",i+'a',cnt[i]);
    }
}

void cnt_char(char in[],int cnt[]){
    int i;
    for(i=0;*(in+i);i++){
        (*(cnt+(*(in+i)-'a')))++;
    }
}