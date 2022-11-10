#include <iostream>
#include <cmath>

double x;

void fool(double) {
    std::cin >> x;
    if (x <= 0 || x != ceil(x)) {
        while (x <= 0 || x != ceil(x)) {
            std::cout << "Please enter only positive integer numbers"
                      << std::endl;// запрет на ввод отрицателных чисел, нецелых  и нулевого значений
            std::cin >> x;
        }
    }
}

int main() {
    double t = 0, day = 0, pay;
    std::cout << "Enter the time of call in seconds. Assuming the call cost is 2 cents per seconds" << std::endl;
    fool(t);                                                // просим ввести количество секунд разговора предполагая стоимость звонка в 2 цента за секунду, поверяем на отрцательные значения
    t = x;
    std::cout << "Enter the number of day (from 1 to 7) when the call have happened" << std::endl;
    fool(day);                                             // просим ввести день, когда был совершен разговор, поверяем на отрцательные значения
    day = x;
    if (x > 7 || x < 1 || x != ceil(x)) {
        while (x > 7 || x < 1 || x != ceil(x)) {
            std::cout << "Please enter only integers numbers between 0 and 8"
                      << std::endl;// запрет на ввод  чисел меньше 1 и больше 7, не целых значений
            std::cin >> x;
        }
    }
    pay = t * 2;
    if (day == 7 || day == 6) {
        pay = pay * 0.8;
        std::cout << "The call cost is " << pay << " cents"
                  << std::endl; // считаем стоимость разговора со скидкой если до этого было указано, что звонок совершен в 6 или 7 день недели
    } else {
        std::cout << "The call cost is " << pay << " cents" << std::endl;
    }                                       // в остальных случаях считаем считаем цену без учета скидки
    return 0;
}
