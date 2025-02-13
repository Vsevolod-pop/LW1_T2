#include <stdexcept>//подключаю библиотеку с ошибками типов данных
#include <string>//подключаю библиотеку с чтобы работать со строками
#include <iostream> //подключаю библиотеку с командами для ввода-ввывода данных
#include <math.h>
using namespace std; //прописываю пространсво имени "std" чтобы не прописывать это имя перед каждым "cin" и "cout"
int main() 
{
    setlocale(LC_ALL, "Russian"); 
    string X; 
    float a = 2.3;
    float y;
    cout << "Введите число х" << endl; 
    getline(cin, X); 
    while (true)
    {
        try
        {
            stof(X);
            break;
        }
        catch (invalid_argument&)
        {
            cout << "Введено не число. Введите корректно, пожалуйста - " << endl;
            cin >> X;
            continue;
        }
    }
    float x = stof(X);
    if (x > 1)
        y = pow(x - 2, 2) + a;
    else if (x < 1)
        y = 1.5 * pow(cos(x), 2);
    else
        y = 1.8 * a;
    cout << "Искомое число y = " << y << endl;

}