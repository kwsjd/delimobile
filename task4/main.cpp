#include <iostream>
#include <cmath>
double x;
void fool(double) {
    std::cin >> x;
    if ( x != ceil(x)) {
        while ( x != ceil(x)) {
            std::cout << "Please enter only  integer numbers"
                      << std::endl;// запрет на ввод нецелых значений
            std::cin >> x;
        }
    }
}
int main() {
    int a,b;
    std::cout << "Please enter the number" << std::endl;
    fool(a);// вводим ЦЕЛОЕ число цифры которого будем считать
    a = x;
    a = abs(a);// берем модуль числа для более простого счета
        while (a != 0) {
            b += a % 10;// считаем сумму цифр
            a /= 10;
        }
    std::cout  << " sum of numbers is equal to " << b << std::endl;
    return 0;
}
