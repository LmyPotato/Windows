#include <iostream>

using namespace std;

template <typename T>

void Myswap(T&a, T&b)
{
	T temp = a;
	a = b;
	b = temp;
}

int main()
{
	int a = 10, b = 20;
	float a1 = 12.32, b1 = 5.65;

	Myswap(a,b);
	cout << "a=" << a << " b=" << b << endl;
	Myswap<float>(a1, b1);
	cout << "a1=" << a1 << " b1=" << b1 << endl;
	system("pause");
	return 0;
}