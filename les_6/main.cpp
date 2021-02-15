#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

using namespace std;

int char_count(string name) {
    ifstream fin;
    fin.open(name);
    if (!fin.is_open())
    {
        cout << "Error. File not open." << endl;
    }

    string str_1;
    while (!fin.eof())
    {
        str_1 = "";
        getline(fin, str_1);
       
    }
    int size = str_1.length();
    fin.close();
    return size;
}

int main(int argc, const char** argv)
{
    //-------------Ex-1-------------
    cout << "Ex_1" << endl;
    ofstream fout;
    fout.open("Hello.txt");
    fout << "Hello ";
    fout.close();

    fout.open("world.txt");
    fout << "world!";
    fout.close();

    //-------------Ex-2-------------
    int size_1 = char_count("Hello.txt");
    int size_2 = char_count("world.txt");
    int size_main = size_1 + size_2;
    char* str_main = new char[size_main];
    
    ifstream fin_1;
    fin_1.open("Hello.txt");
    if (!fin_1.is_open())
    {
        cout << "Error. File not open." << endl;
    }
    char ch;
    char* str_1 = new char[size_1];
    int count = 0;
    while (fin_1.get(ch))
    {
        str_1[count] = ch;
        count++;
    }
  
    for (int i = 0; i < count; i++) {
        cout << str_1[i];
    }
    fin_1.close();

    ifstream fin_2;
    fin_2.open("world.txt");
    if (!fin_2.is_open())
    {
        cout << "Error. File not open." << endl;
    }
    char ch_2;
    char* str_2 = new char[size_1];
    count = 0;
    while (fin_2.get(ch_2))
    {
        str_2[count] = ch_2;
        count++;
    }

    for (int i = 0; i < count; i++) {
        cout << str_2[i];
    }
    fin_2.close();


    for (int i = 0; i <= size_1; i++) {
        str_main[i] = str_1[i];
    }
    for (int i = size_1, j = 0; i <= size_2, j <= size_2; i++, j++) {
        str_main[i] = str_2[j];
    }


    delete[] str_1;
    delete[] str_2;

    //-------------Ex_3-----------------

    fout.open("Hello world.txt");
    fout << str_main;
    fout.close();
    
    delete[] str_main;
/*                                Пытался тут сделать через char, не успел              
    ifstream fin_3;
    fin_3.open("Hello world.txt");
    int size_last = char_count("Hello world.txt");
    char* str_3 = new char[size_arg];
    char ch_3;
    count = 0;
    int i = 0;

    while (fin_3.get(ch_3))
    {
        
        if (arg[i] == ch_3) {
            str_3[i] = ch_3;
            i++;
        }
       
    }
    fin_3.close();
    */

    string arg = argv[2];

    ifstream fin_4;
    fin_4.open("Hello world.txt");
    if (!fin_4.is_open())
    {
        cout << "Error. File not open." << endl;
    }
    string str_4;
    while (!fin_4.eof())
    {
        str_4 = "";
        fin_4 >> str_4;
        if (str_4 == arg) {
            cout << "\n" <<"String exists" << endl;
        }
        
    }
    fin_4.close();


    system("pause");

    return 0;
}



// 1. Написать программу, которая создаст два текстовых файла, 
//    примерно по 50 - 100 символов в каждом(особого значения не имеет);
// 2. Написать функцию, «склеивающую» эти файлы, предварительно буферизуя их содержимое в 
//    динамически выделенный сегмент памяти нужного размера.
// 3.* Написать программу, которая проверяет присутствует ли указанное пользователем при запуске 
//    программы слово в указанном пользователем файле(для простоты работаем только с латиницей).
