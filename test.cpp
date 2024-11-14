// ConsoleApplication1.cpp : Defines the entry point for the console application.
#include <iostream>
#include <algorithm>
using namespace std;
long long int min(long long int a,long long int b) {
	return a < b ? a : b;
}
long long int max(long long int a,long long int b) {
	return a > b ? a : b;
}
int main()
{
	long long int n, c, i;
	cin >> n >> c;
	long long int *x = new long long int[n];
	for (i = 0; i < n; i++)
		cin >> x[i];
	sort(x, x + n);

	for (i = n-1; i>=0; i--) {
		long long int xi = x[i];
		c -= min(c, max(0, xi - c));
	}
	cout << c;
	system("pause");
	return 0;
}