#include<iostream>
#include<cmath>
bool prime_num(int n){
    double a = sqrt(n);
    if(n == 1)
        return false;
    for(int i = 2; i <= a; i++){
        if(n % i == 0)
            return false;
    }
    return true;
}

int main(){
    int m, n;
    scanf("%d %d", &m, &n);
    for(int i=m; i<=n; i++){
        if(prime_num(i))
            std::cout<<i<<std::endl;
    }
}