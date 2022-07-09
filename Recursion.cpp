#include <iostream>

using namespace std;

class Recursion{
public:
	void printSum(int n, int sum = 0) {
		if (n == 0) {
			cout << sum << endl;
			return;
		}
		printSum(n - 1, sum + n);
	}

	void printFactorial(int n, int fact = 1) {
		if (n == 0) {
			cout << fact << endl;
			return;
		}
		printFactorial(n - 1, fact * n);
	}

	void printFibonacciSeries(int n, int b = 1, int a = 0) {
		if (n == 0) return;
		cout << a << " ";
		printFibonacciSeries(n - 1, a + b, b);
	}

	int poweer(int x, int n) {
		if (n == 0)return 1;
		if (x == 0)return 0;
//O(log n) approach
		if (n % 2 == 0)return poweer(x, n / 2) * poweer(x, n / 2);
		else return poweer(x, n / 2) * poweer(x, n / 2) * x;

//O(n) approach
//	return x * poweer(x, n - 1);
	}
};
