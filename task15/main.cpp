#include <string>
#include <iostream>
#include <cmath>

double x;

void fool(double) {
    std::cin >> x;
    if (x <= 0 || x > 12 || x != ceil(x)) {
        while (x <= 0 || x > 12 || x != ceil(x)) {
            std::cout << "Please enter only numbers that month could have"
                      << std::endl;// запрет на ввод отрицателных чисел, нулевого и не целых значений. Также пользователь не может ввести число больше 12.
            std::cin >> x;
        }
    }
}

int main() {
    int m, season;
    std::string month[13]{"zero", "January", "February", "March", "April", "May", "June", "July", "August", "September",
                          "October", "November",
                          "December"};                                                      // имеем два массива с месяцами и распределением на времена года
    std::string Season[13]{"zero", "Winter", "Winter", "Spring", "Spring", "Spring", "Summer",
                           "Summer",            // нулевое значение в массиве занято нулем
                           "Summer", "Autumn", "Autumn", "Autumn", "Winter"};
    std::cout << "Enter the number of month" << std::endl;
    fool(m);                                                // просим ввести номер месяца, поверяем на отрцательные, нулевое и не целые значения, также нельзя ввести число больше 12
    m = x;
    season = m;
    std::cout << "The month is " << month[m] << ". The time of the year is " << Season[season]
              << std::endl;// выводим полученное значение
    return 0;
}
