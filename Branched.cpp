#include <iostream>
using namespace std;

bool isPrime(int num) {
	if (num <= 1) {
		return false;
	}
	for (int i = 2; i * i <= num; i++) {
		if (num % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	int start = 10;
	int end = 500;
	
	for (int i = start; i <= end; i++) {
		if (isPrime(i)) {
			cout << i << " ";
		}
	}
	
	return 0;
}