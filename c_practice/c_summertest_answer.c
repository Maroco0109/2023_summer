/* ASCII CODE ����
'A' - 'D' + 'Z' = 'Z' ���� -3 = w

#include<stdio.h>
int main(){
    printf("%c\n",'A'-'D'+'Z');
}
*/
/* 1^2 + 2^2 + 3^2 + ... n^2 ���
#include<stdio.h>
int sum_of_squares(int n){
    int i, sum = 0;
    for(i = 1;i<=n;i++)
        sum = sum+i*i;
    return sum;
}
int sum_of_squares2(int n){
    while(n>0){
        return ((n*n)+sum_of_squares2(n-1));
    }
}

int main(){
    int n = 3;
    printf("%d\n",sum_of_squares(n));
    printf("%d\n",sum_of_squares2(n));
}
*/
/* ���α׷� ���� ������ ���� ��°� �м�
#include <stdio.h> 
int p(char ch, int n){
    printf("%c%d", ch, n) ;
    return 1 ;
    }
int main() {
    int i , n = 2, fact=1 ; 
    // for loop �򰡴� ���� ��������!�ʱ⹮�� �ѹ���! �ʱ⹮ -> ���ǹ� -> �򰡹� -> ���ǹ� ..
    // for(�ʱ⹮; ���ǹ�; �򰡹�)
    for (i = 0, p('A', i); p('B', i)&& i<= n; ++i, p('C', i)) {
        p('D', i) ;
        fact = fact * i;
    } 
    p('E', i) ;
}
*/
/* ���α׷� ���� ������ ���� ��°� �м�2
#include <stdio.h>
int p(char ch, int n){ printf("%c%d", ch, n) ;return 1;}
int myfact(int n){ if (p('A',n) && n <= 0) return 1;
 return ( p('B',n) * n * myfact(n - 1) * p('R',n) ); } 
int main(){ printf("%d\n", myfact(3));}

//A3B3 3*A2B2 2*A1B1*R1*R2*R3*A0
//A3B3 A2B2A1B1 A0 R1R2R3 6
*/
/* ���α׷� ���� ������ ���� ��°� �м�3
#include <stdio.h>
int main(){
    int i, j, k = 0 ;
    for ( i = 0 ; i <= 4 ; ++i, k++ ){
        if (( i - 2 ))
            i = 3 ;
        for ( j = 3 ; j < 6 ; j = j + 2 ){
            if ( !(j - 4) )
                break ;
            if ( j > 4 )
                continue ;
            printf("A %d %d %d\n", i, j, k) ;
        }
        printf("B %d %d %d\n", i, j, k) ;
        if ( k=1 ) break ;
    }
    printf("%d %d %d\n",i,j,k);     //���� ���Ƿ� ��� ������
 }
i=0 j=0 k=0
i=3 j=3 k=0 -> printf(A 3 3 0)      //A��
i=3 j=5
i=3 j=7 k=0 -> printf(B 3 7 0)      //B��
i=4 j=7 k=1
i=3 j=7 k=1 -> ���� ��
*/
/* ����Լ��� ���� ����: multiplicand�� multiplier Ƚ����ŭ ���ϱ�(���) or ����(����)
#include<stdio.h>
int multiply(int multiplicand, int multiplier){
    if(0==multiplier)
        return 0 ;
    if(multiplier<0){
        printf("%d %d\n",multiplicand, multiplier);
        return multiply(multiplicand, multiplier+1) - multiplicand;
    }
    else {
        printf("%d %d\n",multiplicand, multiplier);
        return multiply(multiplicand, multiplier-1) + multiplicand;
    }
}
int main(){
    printf("%d\n",multiply(3,5));
}
*/
/* ���� ���� ���
#include<stdio.h>
int rev(int n){
    int result = 0;
    for(;n;n/=10)
        result = result*10 + n%10;
    return result;
}
int main(){
    printf("%d\n",rev(123456));
}
*/
/* ��ҹ��� ��ȯ
#include<stdio.h>
char tolower(char ch) // ��Ʈ ��A��+1=��B�� ��B��-��A�� =1 ��a��+1=��b�� �� �� ��
{
 if (ch>='A'&&ch<='Z') return ch-'A'+'a';
 else return ch;
}
int main(){
    printf("%c %c\n",tolower('K'),tolower('z'));
}
*/
/* ���� �Ҽ� -> ���� ����
#include<stdio.h>
int mceiling(double x){
    printf("%lf\n",x);
    return x-1;
}
int main(){
    printf("%d\n",mceiling(-3.01));
}
*/
/* sin, coos, exp
#include<stdio.h>
#include<math.h>
double mysin(double n){
    double tmp = 1;
    double result = 0;
    int i;
    int sign = 1;
    for(i = 1;i<=10;i++){
        tmp = (n/double(i))*tmp;
        if(i%2!=0){
            result = result + sign * tmp;
            sign = -sign;
        }
    }
    return result;
}
double mycos(double n){
    double tmp = 1;
    double result = 1;
    int i;
    int sign = -1;
    for(i = 1;i<=10;i++){
        tmp = (n/double(i))*tmp;
        if(i%2==0){
            result = result + sign * tmp;
            sign = -sign;
        }
    }
    return result;
}
double myexp(double n){
    double tmp = 1;
    double result = 1;
    int i;
    for(i = 1;i<=10;i++){
        tmp = (n/double(i))*tmp;
        result += tmp;
    }
    return result;
}
int main(){
    double n = 0.5;
    printf("%.30lf %.30lf %.30lf\n",mysin(n),sin(n),abs(mysin(n)-sin(n)));
    printf("%.30lf %.30lf %.30lf\n",mycos(n),cos(n),abs(mycos(n)-cos(n)));
    printf("%.30lf %.30lf %.30lf\n",myexp(n),exp(n),abs(myexp(n)-exp(n)));
}
*/
/* ���ڿ� ��
#include<stdio.h>
#include<math.h>
int mystrcmp(char s[], char t[]){
    int i = 0;
    for(i; (s[i]||t[i])&&(s[i]==t[i]); i++);

    return abs(s[i]-t[i]);
}
int main(){
    char a[]="ac";
    char b[]="a";
    printf("%d\n",mystrcmp(a,b));
}
*/
/* ��ȭ��ȣ '-' ����
#include<stdio.h>
void rm(char a[], char result[]){
    int i = 0;
    int j = 0;
    for(i;a[i];i++){
        if(a[i]!='-'){
            result[j]=a[i];
            j++;
        }
    }
}
int main(){
    char a[]="010-1234-5678";
    char result[100];
    rm(a,result);
    printf("%s\n",result);
}
*/
/* last word
#include<stdio.h>
char last_word(char c[]){
    int i = 0;
    for(i;c[i];i++);
    return c[i-1];
}
int main(){
    char c[] = "hongik";
    printf("%c\n",last_word(c));
}
*/