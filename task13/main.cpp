#include <iostream>
#include <ctime>

int main() {
    double b = 0, a = 0, c;
    srand(time(NULL));              // используем функцию указывающие количество прошедшего времени для того чтобы наши числа всегда были случайными
    a = rand() % 9+1;                // функция генерации псевдо случайных чисел с размахом в 9 чисел и исключением нуля
    b = rand() % 9+1;
    std::cout << "Please multiply the numbers : " << a << " and " << b << std::endl; // посим ввести ответ
    std::cin >> c;
    if (c == a * b) { // сравниваем введенные пользователем значения
        std::cout << " Correct answer" << std::endl;
    } else
        std::cout << " Wrong answer" << std::endl;
    return 0;
}
