﻿// Kontr_14_2-Cpp-ITMO.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <vector>
#include <windows.h>

using namespace std;


// (const) T&, (const) string&, (const) auto& v - & для передачи из main массивов других типов
// data_valuess Контейнер (в бинарном виде), для печати
// d_v - элементы кортежа
// separator - разделитель элементов (string)
template <typename T>
void Print( T& data_values, string& separator) {
    int i = 0;
    for (auto& d_v : data_values) {
        if ( i != 0 ){
            cout << separator;
        }
        else {
            cout << "{";
        }
        cout << d_v;
        if (i == size(data_values) - 1) {
            cout << "};" << endl;
        }
        i++;
    }
    cout << "------------------" << endl;
}

int main() {
    int data []= { 1, 2, 3, 34, 7634 };
    string comma = ", ";
    Print(data, comma);

    vector<int> data1 = { 1, 2, 3, 34, 763, 1234, 14 };
    string comma1 = ", ";
    Print(data1, comma1);

    float data2[] = { 1334, 2.001, 35, 346, 7634,6654.43 };
    string comma2 = ", ";
    Print(data2, comma2);

    string data3[] = { "a", "123", "rty", "234567"};
    string comma3 = ", ";
    Print(data3, comma3);


}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
