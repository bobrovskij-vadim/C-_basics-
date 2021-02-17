#include <iostream>
#include <random>
#include <typeinfo>

using namespace std;

random_device rd;
mt19937 mt(rd());
uniform_int_distribution<int> dist(1, 100);

#define FIT(num, b) ((num >= 0) && (num < b)) ? (true) : (false)
#define GET_ARR(arr, i, j) (arr[i][j])
#define GET_ADR(ptr) (*ptr)
#define GET_ARR_SIZE(arr, t) sizeof(arr)/sizeof(t)

int main()
{
    //-------------Ex_1-------------
    cout << "Ex_1" << endl;
    bool Ex_1 = FIT(1, 10);
    cout << Ex_1 << endl;

    //-------------Ex_2------------ 
    cout << "Ex_2" << endl;                // Я правильно понял задания? 

    int row = 5;
    int col = 5;

    int** arr = new int* [row];        
    for (int i = 0; i < row; i++) {
        arr[i] = new int[col];
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            arr[i][j] = dist(mt);
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    int* ptr_arr = &arr[2][2];
    cout << *ptr_arr << endl;

    int f = GET_ADR(ptr_arr);
    cout << f << endl;

    cout << GET_ARR(arr, 2, 2) << endl;

    for (int i = 0; i < row; i++) {    
        delete[] arr[i];
    }
    delete[] arr;

    //-------------Ex_3-------------
    cout << "Ex_3" << endl;

    int arr_2[5] = { 1, 2, 3, 4, 5 };

    auto t = typeid(arr_2).name();
    cout << t << endl;

    int a = GET_ARR_SIZE(arr_2, t);
    cout << a << endl;


    return 0;
}
