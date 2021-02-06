#include <iostream>

using namespace std;

const int a_3 = 5;
const int b_3 = 5;

int main()
{
	//------------Ex-1-------------
	cout << "Ex_1" << endl;
	cout << "Input numner: ";
	int a;
	cin >> a;
	cout << ((a >= 10 && a <= 20) ? "true" : "false") << endl;
	cout << boolalpha;                                            // Вопрос: Есть какой-нибудь более элегантный вариант?  
	cout << ((a >= 10 && a <= 20) ? true : false) << endl;
	
	//------------Ex-2-------------
	cout << "Ex_2\n" << "Input number: ";
	int a_2;
	cin >> a_2;
	bool Ex_2 = true;
	if (a_2 > 1) {
		for (int i = 2; i < a_2; i++) {
			if (a_2 % i == 0)
				Ex_2 = false;
		}
	}
	cout << Ex_2 << endl;
	
	//------------Ex-3-------------
	cout << "Ex_3" << endl;
	cout << (((a_3 == 10 && b_3 == 10) || a_3 + b_3 == 10) ? true : false) << endl; 

	//------------Ex-4-------------
	cout << "Ex_4\n" << "Input year: ";
	int year;
	cin >> year;
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		cout << year << " - bissextile " << endl;
	else 
		cout << year << " - common " << endl;
	
	return 0;
}


