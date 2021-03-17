#include <iostream>
using namespace std;

void Foo(int* n, int* m)
{
	double x;
	x = (sqrt(*n) + *m) / (sqrt(*m) + *n);
	*n++;
	*m++;
	x = x + (sqrt(*n) + *m) / (sqrt(*m) + *n);
	*n++;
	*m++;
	x = x + (sqrt(*n) + *m) / (sqrt(*m) + *n);
	cout << x;
}
void main()
{
	int* n;
	int* m;
	int a[3] = { 8,6,7 };
	int b[3] = { 15,12,21 };
	n = a;
	m = b;
	Foo(n, m);
}
