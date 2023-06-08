#include <iostream>


using namespace std;

void draw(int n, int k) {
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < k; ++j) {
			cout << "#";
		}
		cout << endl;
	}
}

int fact(int n) {
	int res = 1;
	for (int i = 2; i < n + 1; ++i) {
		res *= i;
	}
	return res;
}

bool Simple(int n) {
	for (int i = 2; i < n; ++i) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

int pow(int n) {
	return n * n * n;
}

int max(int a, int b) {
	if (a > b)
		return a;
	else
		return b;
}

int check(int a) {
	if (a > 0)
		return true;
	else
		return false;
}


int main() {
	draw(3, 4);
	cout << fact(3) << endl;
	cout << Simple(4) << endl;
	cout << pow(3) << endl;
	cout << max(4, 1) << endl;
	cout << check(-12) << endl;
	return 0;
}