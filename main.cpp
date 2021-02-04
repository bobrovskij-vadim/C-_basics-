#include <iostream>
#include <cstdlib>

using namespace std;

extern int a_3, b_3, c_3, d_3;

int main()
{
	cout << "Ex_1" << endl;
	int a = 34, b = 41, c = 45, d = 39;
	cout << a * (b + (c / static_cast<float>(d))) << "\n" << endl;

	cout << "Ex_2" << endl;
	int a_2;
	cout << "Input number: ";
	cin >> a_2;
	int b_2 = 21 - a_2;
	cout << ((a_2 < 21) ? b_2 : b_2 * 2);

	cout << "Ex_3" << endl;
	cout << a_3 * (b_3 + (c_3 / static_cast<float>(d_3))) << "\n" << endl;

	cout << "Ex_4" << endl;

	int arr[3][3] = { {0, 1, 0}, {0, 4, 0} }, * ptr_arr;

	ptr_arr = &arr[1][1];

	cout << "\nptr - " << *ptr_arr << endl;

	cout << "\nptr_2 - " << arr[1][1] << endl;

	int arr3[3][3][3] = { 
						{ {1, 2, 3}, {1, 2, 3}, {1, 2, 3} },
					    { {1, 2, 3}, {1, 256, 3}, {1, 2, 3} },
						{ {1, 2, 3}, {1, 2, 3}, {1, 2, 3} }
												     		}, * ptr_arr_3;

	ptr_arr_3 = &arr3[1][1][1];

	cout << "\nptr_arr_3 - " << *ptr_arr_3 << endl;

	system("pause");

	return 0;
}