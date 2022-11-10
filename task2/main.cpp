#include <iostream>
#include <cmath>
float x;
float fool(float) {
    std::cin >> x;
    if (x <=0) {
        while (x <= 0)
        {
            std::cout << "Please enter only numbers, that are more then 0" << std::endl;
            std::cin >> x;// просим ввести радиус помня что он не может быть отрицательным
        }
    }
    return 0;
}
int main() {
    float r = 0,  P = 0, S =0;
    std::cout << "Enter r" << std::endl;
    fool(r);// выполняем функцию fool  которой вводится радиус с условием ограничений
    r = x;
    P= 2*r*M_PI;// считаем необходимые нам характеристики и выводим их
    S = r*r*M_PI;
    std::cout << "S is equal " << S << "; length (P) is " << P  << "; r is " << r  <<std::endl;
    return 0;
}
