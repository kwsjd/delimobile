#include <iostream>
double x;
void fool(double) {
    std::cin >> x;
    if (x <= 0) {
        while (x <= 0) {
            std::cout << "Please enter only  positive numbers" << std::endl;// запрет на ввод отрицателных чисел и нулевого значения
            std::cin >> x;
        }
    }
}
int main() {
    double h = 0, w = 0;
    std::cout << "Enter your height in cm" << std::endl;
    fool(h);                                                // просим ввести свои характеристики
    h = x;
    std::cout << "Enter your weight in kg" << std::endl;
    fool(w);
    w = x;
    if (h-100==w){
        std::cout << "You have the perfect weight-to-height ratio" << std::endl;
    }
    if (h-100>w){
        std::cout << "You have to gain weight" << std::endl;              // проверяем введенные показатели и даем свои реккомендации
    }
    if (h-100<w)
        std::cout << "you need to lose weight or grow up" << std::endl;
    return 0;
}
