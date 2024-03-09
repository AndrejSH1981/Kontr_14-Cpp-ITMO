// Kontr_14_1-Cpp-ITMO.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <windows.h>
#include <typeinfo>


using namespace std;

//  Нахождение среднего значения элементов массива
template <typename T> 
//T Average(T numers[], int sizemass) { - так не выводиться в char cout, нужно делать преобразования типов "cout << static_cast<int>(FindAvg(chars, size)) << endl;" или "cout << int(FindAvg(chars, size)) << endl;"

decltype(auto) Average(T numers[], int sizemass) {
    T summa {};
    for (int i = 0; i < sizemass; ++i) {
        summa += numers[i];
    }
    return summa / sizemass;
}

int main() {


    setlocale(LC_CTYPE, "rus");

    int sizemass = 0;

    int intmass[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    sizemass = size(intmass);
    cout << "type:" << typeid(intmass).name() << ";  " << Average(intmass, sizemass) << endl;


    int longmass[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 100 };
    sizemass = size(longmass);
    cout << "type:" << typeid(longmass).name() << ";  " << Average(longmass, sizemass) << endl;


    double doublemass[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1200, 434 };
    sizemass = size(doublemass);
    cout << "type:" << typeid(doublemass).name() << ";  " << Average(doublemass, sizemass) << endl;


    char charmass[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    sizemass = size(charmass);
    cout << "type:" << typeid(charmass).name() << ";  " << Average(charmass, sizemass) << endl;


    float floatmass[] = { 1, 2, 3, 4, 5 };
    sizemass = size(floatmass);
    cout << "type:" << typeid(floatmass).name() << ";  " << Average(floatmass, sizemass) << endl;

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
