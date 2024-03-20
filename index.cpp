
#include <iostream>
using namespace std;

template <typename T> 
T templaction1(T n) {
	int a = 1;
	if (n % 2 == 0) {
		for (int i = 2; i <= n; i += 2) {
			a *= i;
		}
	}
	if (n % 2 == 1) {
		for (int i = 1; i <= n; i += 2) {
			a *= i;
		}
	}
	return a;
}

template <typename T>
T templaction2(T n) {
	T a = (-1) * n + 1 + templaction1(n);

	return a;
}

int action1(int& n) {
	int a = 1;
	if (n % 2 == 0) {
		for (int i = 2; i <= n; i += 2) {
			a *= i;
		}
	}
	if (n % 2 == 1) {
		for (int i = 1; i <= n; i += 2) {
			a *= i;
		}
	}
	return a;
}

 void action2(int& n) {
	n = (-1) * n + 1 + action1(n);

}

int main() {
	cout << "enter a natural number: ";
	int n;
	cin >> n;
	if (n > 0) {

		cout << "template function:\n" << "a!! = " << templaction1(n) << endl;
		cout << "(-1)*n+1+n!! = " << templaction2(n) << endl;

		cout << "classic function:\n" << "a!! = " << action1(n) << endl;
		action2(n);
		cout << "(-1)*n+1+n!! = " << n << endl;
	}
	else
		cout << "the number is not natural" << endl;
}