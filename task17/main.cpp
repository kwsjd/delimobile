#include <iostream>
#include <cmath>
#include <windows.h>

double x;

void fool(double) {
    std::cin >> x;
    if (x < 1 || x > 99 || x != ceil(x)) {
        while (x < 10 || x > 99 || x != ceil(x)) {
            std::cout << "У Вас может быть лишь о 1 до 99 копеек, помните, что нецелого значения копейка не принимает"
                      << std::endl;// запрет на ввод отрицателных чисел, нулевого и не целых значений. Также пользователь не может ввести число больше 99 и меньше 1
            std::cin >> x;
        }
    }
}

using namespace std;

int main() {
    SetConsoleCP(65001);                                        // устанавливаем русский язык
    SetConsoleOutputCP(65001);
    int a;
    std::cout << "введите количество копеек:"
              << std::endl;        // не даем вводить числа, которые нас не интересуют используя заранее написанную функцию проверки
    fool(a);
    a = x;
    if (a > 10 && a < 20) {
        std::cout << "У Вас " << a << " копеек " << std::endl;
        return 0;
    }
    if (a % 10 == 1) {
        std::cout << "У Вас " << a << " копейка "
                  << std::endl;            // расписываем по падежам слово копейка и выставляем к значению "а" нужный падеж
    }
    if (a % 10 == 2 || a % 10 == 3 || a % 10 == 4) {
        std::cout << "У Вас " << a << " копейки " << std::endl;
    }
    if (a % 10 == 5 || a % 10 == 6 || a % 10 == 7 || a % 10 == 8 || a % 10 == 9 || a % 10 == 0) {
        std::cout << "У Вас " << a << " копеек " << std::endl;
    }
    return 0;
}

