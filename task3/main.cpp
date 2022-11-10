#include <iostream>
#include <cmath>
double x;
double fool(double) {
    std::cin >> x;
    if (x <=0) {
        while (x <= 0)
        {
            std::cout << "Please enter only numbers, that are more then 0" << std::endl;// пользователь не может ввести отрицательное число
            std::cin >> x;
            return 0;
        }
    }
    return 0;
}
int main() {
    double b = 0, a = 0, c, S, g, m, l;
    std::cout << "Enter b" << std::endl;
    fool(b);
    b = x;
    std::cout << "Enter a" << std::endl;
    fool(a);// просим ввести катеты треугольника проверяем их на отрицательные значения
    a = x;
    c = pow((pow(a, 2) +pow(b, 2)), 0.5);// считаем гиппотенузу и сразу площадь
    S = a*b/2;
    std::cout << "S is equal " << S << "; b is " << b  << "; a is " << a  << "; c is " << c  <<std::endl;
    return 0;
}
