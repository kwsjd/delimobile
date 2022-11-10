#include <iostream>
#include <cmath>
double x;
void fool(double) {
    std::cin >> x;
    if (x <0 || x<=86400 || x != ceil(x)) {
        while (x < 0 || x > 86400|| x != ceil(x)) // 86400 именно столько секунд в 1 дне.
        {
            std::cout << "Please enter only numbers, that are positive and no more then 86400" << std::endl;// запрет на ввод отрицателных и нецелых значений а также на ввод слишком большого числа.
            std::cin >> x;
        }
    }
}
int main() {
    double b = 0, hours, min, sec;
    std::cout << "Enter the amount of seconds that have elapsed" << std::endl;
    fool(b);// вводим и проверяем введенное число на установленные ранее ограничения
    b = x;
    hours = floor((b / 3600));                      // считаем количество часов и округляем в меньшую сторону
    min = floor((b - hours*3600)/60);               // считаем количество минут и округляем в меньшую сторону
    sec = b - hours*3600 -min*60;                   //считаем количество секунд вычитая полученные ранее значения
    std::cout << hours<< " hours "<< min<< " minutes " <<sec<< " seconds have passed since the day began"<< std::endl;
    return 0;
}