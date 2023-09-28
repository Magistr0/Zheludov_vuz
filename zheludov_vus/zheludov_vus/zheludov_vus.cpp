#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");
    cout << "Hello World!\n";
    int num;
    char liter;

    cout << "Введите символ\n";
    cin >> liter;

    cout << "Введите цифру\n";
    cin >> num;

    cout << "Ваша цифра:" << num << "\n" << "Ваша буква:" << liter;
    return 0;
}