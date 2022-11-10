#include <iostream>
#include <cmath>

double x;

void fool(double) {
    std::cin >> x;
    if (x == 0) {
        while (x == 0) {
            std::cout << "You can not enter 0"
                      << std::endl;// запрет на ввод нулевого значения
            std::cin >> x;
        }
    }
}

int main() {
    double a, b, c, x1, x2, D;
    std::cout << "Enter a index: " << std::endl;
    fool(a);
    a = x; // мы не можем позволить ввести вместо а = 0 так как тогда не будет квадратного уравнения
    std::cout << "Enter b index: " << std::endl;
    std::cin >> b;
    std::cout << "Enter c index : " << std::endl;   // вводим остальные индексы
    std::cin >> c;

    D = pow(b, 2) - 4 * a * c; // ищем дискреминант
    if (D > 0) {
        x1 = ((-b) + pow(D, 0.5)) / (2 * a);
        x2 = ((-b) - pow(D, 0.5)) / (2 * a);
        std::cout << "x1 = " << x1 << std::endl;
        std::cout << "x2 = " << x2 << std::endl;// по дискриминанту определяем корни и их отсутствие
        return 0;
    }
    if (D == 0) {
        x = -(b / (2 * a));
        std::cout << "x = " << x << std::endl;
    } else if (D < 0)
        std::cout << "This equation has no roots" << std::endl;
    return 0;
}