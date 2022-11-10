#include <iostream>
#include <cmath>
double x;
void fool(double) {
    std::cin >> x;
    if (x < 1000 || x > 9999 || x != floor(x)) {
        while (x < 1000 || x > 9999 || x != floor(x)) {
            std::cout << "Please enter only numbers that have 4 elements"
                      << std::endl;//  пользователь не может ввести не четырехзначное число, а также нецелые и отрицательные значения
            std::cin >> x;
        }
    }
}
int main() {
    int a, b, c, d, e;
    std::cout << "enter the number" << std::endl;          // просим ввести число,запретив неподходящие значения
    fool(a);
    a = x;
    b = a%10; // 4 цифра
    c = a/1000; //1 цифра
    d = (a/100)%10; // 2 цифра        // данный способ я взял у  студента/студентки  нашей группы, так как он показался мне оригинальным и не громоздким
    e = (a/10)%10; // 3 цифра
    if (b == c && d==e ){// сравниваем смотрим является ли число палиндромом
        std::cout << "This number is a palindrome" << std::endl;
        return 0;
    }
    else{
        std::cout << "This number is  NOT a palindrome" << std::endl;

    }
    return 0;
}
