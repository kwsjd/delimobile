#include <iostream>
#include <cmath>

double x;

void chek(double) {
    std::cin >> x;
    if (x != 1 && x!= 2) {
        while (x != 1 && x != 2) {
            std::cout << "You have to enter only  numbers that I have sad"
                      << std::endl;// запрет на ввод цифр кроме 1 и 2.
            std::cin >> x;
        }
    }
}
void fool(double) {
    std::cin >> x;
    if (x <= 0) {
        while (x <= 0) {
            std::cout << "You have to enter only positive numbers"
                      << std::endl;// запрет на ввод отрицательных значений.
            std::cin >> x;
        }
    }
}
int main() {
    double a = 0, y = 0, r = 0, f = 0;
    std::cout
            << "If you would like to switch your coordinates from Cartesian to polar enter 1. If you would like to switch your coordinates from polar to Cartesian enter 2. "
            << std::endl;
    chek(a);// спрашиваем в какие координаты вы хотите перевести
    a = x;
    if (a == 2) {
        std::cout << "you would like to switch your coordinates from Cartesian to polar, please enter r(radius)"
                  << std::endl;
        fool(r);// просим ввести полярный радиус
        r = x;
        std::cout << " Enter tilt angle f " << std::endl;
        std::cin >> f;// просим ввести угол наклона с учетом ограничений
        if (f < 0 || f > 360) {
            while (f < 0|| f > 360) {
                std::cout << "You have to enter only  numbers between 0 and 360"
                          << std::endl;// запрет на ввод отрицательных значений.
                std::cin >> f;
            }
        }
        x = r * cos(f);
        y = r * sin(f);// считаем координаты и выводим полученные значения
        std::cout << "Your coordinates is " << x << " and " << y << std::endl;
        return 0;
    } else {
        std::cout << " Enter your X coordinate" << std::endl;
        std::cin >> x;
        std::cout << " Enter your Y coordinate" << std::endl;// просим ввести координаты Х и У
        std::cin >> y;
        r = pow((pow(x, 2) + pow(y, 2)), 0.5);
        f = atan(y / x);// Считаем полярные координаты и выводим их
        std::cout << "Your polar angel is " << f << " radians, Your polar radius is " << r << std::endl;
        return 0;
    }
}
