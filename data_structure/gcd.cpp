//최대공약수 알고리즘( sub, mod, recursion )
#include<iostream>

int gcd_sub(int a, int b){
    while(a!=0&&b!=0){
        if(a>b)
            a = a-b;
        else
            b = b-a;
    }
    return a+b;
}
int gcd_mod(int a, int b){
    while(a!=0&&b!=0){
        if(a>b)
            a = a%b;
        else
            b = b%a;
    }
    return a+b;
}
int gcd_rec(int a, int b){
    if(a>b)
            return gcd_rec(a%b, b);
        else
            return gcd_rec(a, b%a);
}

int main(){
    int a = 10;
    int b = 2;
    std::cout<<gcd_mod(a,b)<<'\n';
}