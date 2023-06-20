#include<iostream>
#include<cmath>
/*
bool prime_num(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0)
            return false;
    }
    return true;
}
*/
void prime_num2(int n){
    bool *prime = new bool[n+1];

    for(int i = 0; i <= n; i++)
        prime[i] = true;

    for(int i = 2; i <= n; i++){
        if(prime[i]){
            std::cout<<i<<'\n';
            for(int j = i*2; j <= n; j += i)
                prime[j] = false;
        }
    }
}
int main(){
    int m, n;
    scanf("%d %d", &m, &n);
    prime_num2(n);

}