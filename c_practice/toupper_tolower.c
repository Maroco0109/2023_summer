// �빮�ڴ� �ҹ��ڷ�, �ҹ��ڴ� �빮�ڷ� �ٲٴ� �Լ�

#include<stdio.h>

char tolowwer_toupper(char c);

int main(){
    char user_input;
    scanf("%c",&user_input);

    printf("���: %c\n",tolowwer_toupper(user_input));

    return 0;
}

char tolowwer_toupper(char c){
    if(c>='A'&&c<='Z')
        return c-'A'+'a';
    else if(c>='a'&&c<='z')
        return c-'a'+'A';
    else{
        printf("User input error!\n");
        return 'X';
    }
        
}