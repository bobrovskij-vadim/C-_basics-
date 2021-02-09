#include "Func.h"

namespace my_func
{

    void fun_print_arr(int* arr, int size)
    {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void fun_Ex_1_if(int* arr_1, int size)
    {
        for (int i = 0; i < size; i++) {
            if (arr_1[i] == 1) {
                arr_1[i] = 0;
            }
            else if (arr_1[i] == 0)
            {
                arr_1[i] = 1;
            }
        }
    }

    void fun_Ex_1_count(int arr_1[], int size)
    {
        for (int i = 0; i < size; i++) {
            arr_1[i] = (arr_1[i] + 1) % 2;
        }
    }

    void fun_Ex_2(int* arr, int size)
    {
        for (int i = 0; i < size; i++) {
            arr[i] = i * 3 + 1;
        }
    }

    bool fun_Ex_3(int* arr, int size)
    {
        bool res = false;
        int arr_sum = 0;
        for (int i = 0; i < size; i++) {
            arr_sum += arr[i];
        }
        int arr_right_sum = 0;
        for (int i = 0; i < size; i++) {
            arr_right_sum += arr[i];
            if (arr_right_sum == arr_sum - arr_right_sum) {
                res = true;
            }
        }
        return res;
    }

    void fun_Ex_4(int n, int* arr, int size)
    {
        for (int i = 0; i < size; i++) {
            arr[i] += n;
        }
    }

    void fun_Ex_5(int* arr, int size)
    {
        for (int i = 0; i < size; i++) {
            if (arr[i] == 1) {
                arr[i] = 0;
            }
            else if (arr[i] == 0)
            {
                arr[i] = 1;
            }
        }
    }
}
