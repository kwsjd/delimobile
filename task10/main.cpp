#include <iostream>
double x;
void fool(double) {
    std::cin >> x;
    if (x <= 0) {
        while (x <= 0) {
            std::cout << "Please enter only numbers, that are more then 0"
                      << std::endl;// запрет на ввод отрицателных или нулевого значений
            std::cin >> x;
        }
    }
}
int main() {
    double b = 0, a = 0, c = 0;
    std::cout << "Enter b" << std::endl;
    fool(b);
    b = x;
    std::cout << "Enter a" << std::endl; // вводим стороны треугольника
    fool(a);
    a = x;
    std::cout << "Enter c" << std::endl;
    fool(c);
    c = x;
    if (a + b < c || b + c < a || c + a < b) {
        std::cout << "There is no triangle with such sides"
                  << std::endl;// проверяем введенные данные на правило построения треугольника
        return 0;
    }
    if (a == b || b == c || a == c) {
        std::cout << "The triangle is isosceles." << std::endl; // узнаем равнобедренный треугольник или нет
    } else {
        std::cout << "The triangle is NOT isosceles." << std::endl;
    }
    return 0;
}