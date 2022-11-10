#include <iostream>

float x;

float fool(float) {
    std::cin >> x;
    if (x <= 0) {
        while (x <= 0) {
            std::cout << "Please enter only numbers, that are more then 0" << std::endl;
            std::cin >> x;// с помощью этой функции не даем вводить числа меньше 0
        }
    }
    return 0;
}

int main() {
    float b = 0, a = 0, h = 0, S;
    std::cout << "Enter b" << std::endl;
    fool(b);
    b = x;
    std::cout << "Enter a" << std::endl;           // вводим числа с условием ограничений
    fool(a);
    a = x;
    std::cout << "Enter h" << std::endl;
    fool(h);
    h = x;
    S = h * (a + b) / 2;// считаем площадь и выводим найденное значение
    std::cout << "S is equal " << S << "; b is " << b << "; a is " << a << "; h is " << h << std::endl;
    return 0;
}