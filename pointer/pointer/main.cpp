#include<iostream>

using namespace std;

// (... , int* sum, int* mul)の部分で、pointer領域を用意
// *sumでその実態としての値を挿入
void sum_mul(int x, int y, int* sum, int* mul) {
	*sum = x + y;
	*mul = x * y;
}

int main(void) {

    // ********************************
	// 初期化 ((初期化しないとバグる！！！))
	int wa = 0;
	int seki = 0;
	// --------------------------
    // ptrというpointer領域を確保
	int* ptr;
    // ********************************


	int a = 135, b = 253, sw;
	cin >> sw;
	
	// ptrにa or bのアドレスを代入 
	if (sw == 0) { ptr = &a; }
	else         { ptr = &b; }


	cout << "a=" << a << "; b=" << b << "; sw=" << sw << endl;
	cout << ptr << endl;
	// アドレスを参照して実態を読む！
	cout << *ptr << endl;

    // **********************************************
	// pointer sumをエイリアスとして、waのアドレスを関数に入力。
	// ==> pointer sumはwaを指すことになる
	// 関数sum_mul内で、waにその結果が入る！
	sum_mul(a, b, &wa, &seki);
	cout << "wa:" << wa << "; seki:" << seki << endl;
    // **********************************************


    cout << "***************************************" << endl;

	// (a or bの)実態を上書き
	*ptr = 999;

	cout << "a=" << a << "; b=" << b << "; sw=" << sw << endl;
	cout << ptr << endl;
	cout << *ptr << endl;

    // **********************************************
	// pointer sumをエイリアスとして、waのアドレスを関数に入力。
	// ==> pointer sumはwaを指すことになる
	// 関数sum_mul内で、waにその結果が入る！
	sum_mul(a, b, &wa, &seki);
	cout << "wa:" << wa << "; seki:" << seki << endl;
    // **********************************************


	return 0;
}
