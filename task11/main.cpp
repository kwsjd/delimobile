#include <iostream>
double x;
void fool(double) {
    std::cin >> x;
    if (x < 0) {
        while (x < 0) {
            std::cout << "Please enter only  positive numbers" << std::endl;// запрет на ввод отрицателных чисел
            std::cin >> x;
        }
    }
}
int main() {
    double b = 0;
    std::cout << "Enter the sum of your purchase" << std::endl;
    fool(b);
    b = x;// не даем ввести отрицательное значение
    if (b > 1000) {                                            // проверяем больше ли сумма покупки чем 1000
        b = 0.9 * b;                                          // считаем сумму к оплате с учетом скидки
        std::cout << "Your have to pay " << b << std::endl;
    } else {
        std::cout << "Your have to pay " << b << std::endl;
    }
    return 0;
}
