#include <iostream>
#include <math.h>
void isPrime3(int n) {
	bool *isPrime = new bool[n+1];// n���� ���ؾ��ϹǷ�, n+1���� �����Ҵ�
	
	//���� ��� �迭�� true�� �ʱ�ȭ
	for (int i = 0; i <= n; i++) {
		isPrime[i] = true;
	}
 
 
	for (int i = 2; i <= n; i++) {
		if (isPrime[i]) {//�ش���� �Ҽ����, ����ϰ� �ش���� ������ ������� ��� ����
			std::cout << i << std::endl;
			for (int j = i * 2; j <= n; j += i) {
				isPrime[j] = false;
			}
		}
	}
}
int main(){
    int n, m;
    std::cin >> n >> m;
    isPrime3(m);
}