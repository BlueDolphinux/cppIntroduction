#include<iostream>

using namespace std;

// (... , int* sum, int* mul)�̕����ŁApointer�̈��p��
// *sum�ł��̎��ԂƂ��Ă̒l��}��
void sum_mul(int x, int y, int* sum, int* mul) {
	*sum = x + y;
	*mul = x * y;
}

int main(void) {

    // ********************************
	// ������ ((���������Ȃ��ƃo�O��I�I�I))
	int wa = 0;
	int seki = 0;
	// --------------------------
    // ptr�Ƃ���pointer�̈���m��
	int* ptr;
    // ********************************


	int a = 135, b = 253, sw;
	cin >> sw;
	
	// ptr��a or b�̃A�h���X���� 
	if (sw == 0) { ptr = &a; }
	else         { ptr = &b; }


	cout << "a=" << a << "; b=" << b << "; sw=" << sw << endl;
	cout << ptr << endl;
	// �A�h���X���Q�Ƃ��Ď��Ԃ�ǂށI
	cout << *ptr << endl;

    // **********************************************
	// pointer sum���G�C���A�X�Ƃ��āAwa�̃A�h���X���֐��ɓ��́B
	// ==> pointer sum��wa���w�����ƂɂȂ�
	// �֐�sum_mul���ŁAwa�ɂ��̌��ʂ�����I
	sum_mul(a, b, &wa, &seki);
	cout << "wa:" << wa << "; seki:" << seki << endl;
    // **********************************************


    cout << "***************************************" << endl;

	// (a or b��)���Ԃ��㏑��
	*ptr = 999;

	cout << "a=" << a << "; b=" << b << "; sw=" << sw << endl;
	cout << ptr << endl;
	cout << *ptr << endl;

    // **********************************************
	// pointer sum���G�C���A�X�Ƃ��āAwa�̃A�h���X���֐��ɓ��́B
	// ==> pointer sum��wa���w�����ƂɂȂ�
	// �֐�sum_mul���ŁAwa�ɂ��̌��ʂ�����I
	sum_mul(a, b, &wa, &seki);
	cout << "wa:" << wa << "; seki:" << seki << endl;
    // **********************************************


	return 0;
}
