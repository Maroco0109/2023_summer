#include<stdio.h>
int clean_word(char* c);
int main(){
    FILE *ip,*op;
    char word[100];
    ip=fopen("C:\\Users\\user\\Desktop\\examples\\c++\\2023_summer\\c_practice\\files\\__linux.words.txt","r");
    op=fopen("C:\\Users\\user\\Desktop\\examples\\c++\\2023_summer\\c_practice\\files\\__linux.words_result.txt","w");
    if(!op||!ip){printf("파일 오류!\n"); return 0;}
    for(;fscanf(ip,"%s",word)>0;){
        if(clean_word(word))
            fprintf(op,"%s\n",word);
    }
    fclose(ip),fclose(op);

    return 0;
}

int clean_word(char* c){
    int i;
    for(i=0;*(c+i);i++){
        if(!('a'<=*(c+i)&&*(c+i)<='z'))
            return 0;
    }
    if(i<6)
        return 0;
    return 1;
}