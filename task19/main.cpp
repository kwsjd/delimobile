#include <iostream>
#include <cmath>

double x;

void fool(double) {
    std::cin >> x;
    if (x < 100 || x > 999 || x != ceil(x)) {
        while (x < 100 || x > 999 || x != ceil(x)) {
            std::cout << "You have to enter only  integer numbers between 100 and 999"
                      << std::endl;// запрет на ввод не целых значений. Также пользователь не может ввести число больше 999 и меньше 100
            std::cin >> x;
        }
    }
}

int main() {
    int a, c, d, e, multy;
    double b;
    std::cout << "Enter a:"
              << std::endl;        // не даем вводить числа, которые нас не интересуют используя заранее написанную функцию проверки
    fool(a);
    a = x;
    std::cout << "Enter b:" << std::endl;
    std::cin >> b;
    c = a % 10; // ищем цифры числа способом который я уже применял в своих работах
    d = (a / 10) % 10;
    e = a / 100;
    multy = c * d * e; // перемножаем цифры
    if (multy > b) { //проверяем больше ли чимл b чем перемножение цифр
        std::cout << "multiplying the digits of this number is  more than the number you have entered:" << multy << ">"
                  << b
                  << std::endl;
    } else {
        std::cout << "multiplying the digits of this number is NOT more than the number you have entered:" << multy
                  << "<" << b
                  << std::endl;
    }
    if (multy % 7 == 0) { // проверяем делится ли без остатка
        std::cout << "multiplying the digits of this number is multiplied by the number 7"
                  << std::endl;
    } else
        std::cout << "multiplying the digits of this number is NOT multiplied by the number 7"
                  << std::endl;

    return 0;
}

