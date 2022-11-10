#include <iostream>

double x;

void fool(double) {
    std::cin >> x;
    if (x < 0) {
        while (x < 0) {
            std::cout << "You have to enter only positive numbers"
                      << std::endl;// запрет на ввод отрицательных значений.
            std::cin >> x;
        }
    }
}

int main() {
    double a=0, c=0, d = 0, b=0;
    std::cout << "Enter a, Box 1:" << std::endl;// просим ввести ширину и длинну обоих прямоугольников
    fool(a);
    a = x;
    std::cout << "Enter b, Box 1:" << std::endl;
    fool(b);// не даем вводить числа, которые нас не интересуют используя заранее написанную функцию проверки
    b = x;
    std::cout << "Enter c, Box 2:" << std::endl;
    fool(c);
    c = x;
    std::cout << "Enter d, Box 2:" << std::endl;
    fool(d);
    d = x;
    if (a < c && b < d) {
        std::cout << "You can fit box A in box B:" << std::endl;
    } else                          //проверяем поместится ли прямоугольник в другой прямоугольник. Стороны будут паралельны всегда
        std::cout << "You can NOT fit box A in box B:" << std::endl;
    return 0;
}

