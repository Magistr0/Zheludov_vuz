#include <iostream>
int main()
{
    setlocale(LC_ALL, "RU");
    std::cout << "Hello World!\n";
    int num;
    char liter;

    std::cout << "Введите символ\n";
    std::cin >> liter;

    std::cout << "Введите цифру\n";
    std::cin >> num;

    std::cout << "Ваша цифра:" << num << "\n" << "Ваша буква:" << liter;
}