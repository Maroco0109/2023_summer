// ��ǿ� ���� �о� �ҷ� �ܾ� ���� (�ҹ��ڷθ� �� 6�� �̻� �ܾ) �� ����
#include<stdio.h>
int clean6word(char c[]);

int main() {
	FILE* ip, * op;		// <stdio.h>
	char word[100];
	ip = fopen("C:\\Users\\MaRoco\\Desktop\\Lecture\\2023_summer\\2023_summer\\c_practice\\file_io\\__linux.word.txt", "r");		// "r" ���ڿ�
	op = fopen("C:\\Users\\MaRoco\\Desktop\\Lecture\\2023_summer\\2023_summer\\c_practice\\file_io\\__linux.word_result.txt", "w");
	if (!ip || !op) { printf("%d %d ���� ����� ����\n", ip, op); return 0; }					// 0�̸� ����
	for (; fscanf(ip, "%s", word) > 0;) {		// word ��ü�� �ּ� ���. &���̸� ����
		// fscanf �� ���� ���� ����. 0, -1 ���� �� 0�� ����. ���� �߻� --> ����
		if (clean6word(word))
			fprintf(op, " % s\n", word);    //fprintf(stdout, "%s\n", word);    --> ��� Ȯ��
	}
	fclose(ip);
	fclose(op);
}

 int clean6word(char c[]) {
	 int i;
	 for (i = 0; *(c + i); i++) {
		 if (!('a' <= *(c + i) && *(c + i) <= 'z'))	// �ҹ��� �ƴϸ� �ҷ��ܾ�
			 return 0;
	 }
	 if (i < 6)	return 0;   // 6���� �̸��̸� �ҷ��ܾ�
	 return 1;  	// �췮 �ܾ���
#include<stdio.h>
int clean_word(char* c);
int main(){
    FILE *ip,*op;
    char word[100];
    ip=fopen("C:\\Users\\user\\Desktop\\examples\\c++\\2023_summer\\c_practice\\files\\__linux.words.txt","r");
    op=fopen("C:\\Users\\user\\Desktop\\examples\\c++\\2023_summer\\c_practice\\files\\__linux.words_result.txt","w");
    if(!op||!ip){printf("���� ����!\n"); return 0;}
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