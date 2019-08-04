#include<iostream>

using namespace std;

int main(void) {

	int a = 135, b = 253, sw;

	cin >> sw;

	int* ptr;
	if (sw == 0)
	{
		ptr = &a;
	}
	else
	{
		ptr = &b;
	}
	

	cout << "a=" << a << "; b=" << b << "; sw=" << sw << endl;
	cout << ptr << endl;
	cout << *ptr << endl;

	*ptr = 999;

	cout << "a=" << a << "; b=" << b << "; sw=" << sw << endl;
	cout << ptr << endl;
	cout << *ptr << endl;

	return 0;
}
