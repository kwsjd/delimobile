#include <iostream>
#include <cmath>
double x;
void fool(double) {
    std::cin >> x;
    if (x < 100000 || x > 999999 || x != ceil(x)) {
        while (x < 100000 || x > 999999 || x != ceil(x)) {
            std::cout << "Please enter only numbers that have 6 elements"
                      << std::endl;// запрет на ввод отрицателных чисел, нулевого и нецелых значений. Также пользователь не может ввести не шестизначное число
            std::cin >> x;
        }
    }
}
int main() {
    int a, b, c, d, e, f, g;
    std::cout << "enter the number" << std::endl;              // просим ввести удовлетворяющее нас число
    fool(a);
    a = x;
    b = a%10; // 6 цифра
    c = a/100000; //1 цифра
    d = (a/10000)%10; // 2 цифра
    e = (a/1000)%10; // 3 цифра                 // раскладываем число на цифры
    f = (a/100)%10; // 4 цифра
    g = (a/10)%10; // 5 цифра
    if (b+g+f == e+c+d){ // сравниваем смотрим является ли число счастливым
    std::cout << " This is a lucky number " << std::endl;
    }
    else
        std::cout << " This is NOT a  lucky number " << std::endl;

    return 0;
}
