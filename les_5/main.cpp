#include <iostream>
#include "Func.h"

using namespace std;

void print_arr(int* arr, int size)
{
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void Ex_1_if(int *arr_1, int size)
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

void Ex_1_count(int* arr_1)                    //Вот этот момент, пытался выяснить на уроке, почему в функции Ex_1_count(arr_1), в цикле for не корректно считается размер массива, меняется только первый элемент?
{
    for (int i = 0; i < sizeof(arr_1) / sizeof(*arr_1); i++) {
        arr_1[i] = (arr_1[i] + 1) % 2;
    }
}

void Ex_1_count(int* arr_1, int size)          // Здесь работает корректно, функция  print_arr(int* arr, int size) 
{                                              
    for (int i = 0; i < size; i++) {
        arr_1[i] = (arr_1[i] + 1) % 2;
    }
}

void Ex_2(int* arr, int size)
{
    for (int i = 0; i < size; i++) {
        arr[i] = i * 3 + 1;
    }
}

bool Ex_3(int* arr, int size)
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


void Ex_4(int n, int* arr, int size)
{
    for (int i = 0; i < size; i++){
        arr[i] += n;
    }
}


void Ex_5(int* arr, int size) 
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


int main()
{
    //--------------Ex-1--------------
    cout << "Ex_1" << endl;
    int arr_1[10] = { 1, 1, 0, 0, 1, 0, 1, 1, 0, 0 };
    int size = sizeof(arr_1) / sizeof(*arr_1);
    print_arr(arr_1, size);           
    Ex_1_if(arr_1, size);                  //ВОПРОС: Какая из функций менее ресурсоемкая, через if или вычисление?            
    print_arr(arr_1, size);
    Ex_1_count(arr_1);                     // Сравнительно функций Ex_1_if() и Ex_1_count()
    print_arr(arr_1, size); 
    Ex_1_count(arr_1, size);                    
    print_arr(arr_1, size);
    
    //--------------Ex-2--------------
    cout << "Ex_2" << endl;
    int arr_2[8];

    Ex_2(arr_2, 8);
    print_arr(arr_2, 8);

    //--------------Ex-3--------------
    cout << "Ex_3" << endl;
    int arr_3[5] = { 5, 3, 1, 8, 7 };
    bool res = Ex_3(arr_3, 5);
    cout << "res = " << res << endl;
    print_arr(arr_3, 5);

    //--------------Ex-4--------------
    cout << "Ex_4" << endl;
    Ex_4(-3, arr_1, size);
    print_arr(arr_1, size);
    Ex_4(7, arr_1, size);
    print_arr(arr_1, size);

    //--------------Ex-5--------------
    cout << "Ex_5" << endl;
    int arr_5[10] = { 1, 1, 0, 0, 1, 0, 1, 1, 0, 0 };
    Ex_5(arr_5, sizeof(arr_5) / sizeof(*arr_5));
    print_arr(arr_5, sizeof(arr_5) / sizeof(*arr_5));

    //--------------Ex-6--------------
    cout << "Ex_6" << endl;
    int arr_6[10] = { 1, 1, 0, 0, 1, 0, 1, 1, 0, 0 };
    int size_6 = sizeof(arr_6) / sizeof(*arr_6);
    my_func::fun_print_arr(arr_6, size_6);

    void (*e_1_if)(int *arr_6, int size_6);
    e_1_if = my_func::fun_Ex_1_if;
    e_1_if(arr_6, size_6);
    my_func::fun_print_arr(arr_6, size_6);

    void (*e_1_count)(int* arr_6, int size_6);
    e_1_count = my_func::fun_Ex_1_count;
    e_1_count(arr_6, size_6);
    my_func::fun_print_arr(arr_6, size_6);

    void (*e_2)(int* arr_6, int size_6);
    e_2 = my_func::fun_Ex_2;
    e_2(arr_6, size_6);
    my_func::fun_print_arr(arr_6, size_6);

    bool (*e_3)(int* arr_6, int a);
    e_3 = my_func::fun_Ex_3;
    e_3(arr_6, 5);
    my_func::fun_print_arr(arr_6, size_6);

    void (*e_4)(int a, int* arr_6, int size_6);
    e_4 = my_func::fun_Ex_4;
    e_4(5, arr_6, size_6);
    my_func::fun_print_arr(arr_6, size_6);

    void (*e_5)(int* arr_6, int size_6);
    e_5 = my_func::fun_Ex_5;
    e_5(arr_6, size_6);
    my_func::fun_print_arr(arr_6, size_6);
    
    system("pause");

    return 0;
    

}