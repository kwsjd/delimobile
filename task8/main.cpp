#include <iostream>
#include <cmath>
double x;
void fool(double) {
    std::cin >> x;
    if (x <=0) {
        while (x <= 0)
        {
            std::cout << "Please enter only numbers, that are more then 0" << std::endl;// запрет на ввод отрицателных или нулевого значений
            std::cin >> x;
        }
    }
}
int main() {
    double b = 0, a = 0, c = 0, m1, m2, m3;
    std::cout << "Enter b" << std::endl;
    fool(b);
    b = x;
    std::cout << "Enter a" << std::endl;
    fool(a);
    a = x;
    std::cout << "Enter c" << std::endl;
    fool(c);
    c = x;
    if (a+b<c||b+c<a||c+a<b){
        std::cout<< "There is no triangle with such sides"<<std::endl;// проверяем введенные данные на правило построения треугольника
        return 0;
    }
    m1= pow((2*(pow(a,2)+ pow(b,2))- pow(c,2)), 0.5); // ищем изначальные медианы
    m2= pow((2*(pow(c,2)+ pow(b,2))- pow(a,2)), 0.5);
    m3= pow((2*(pow(a,2)+ pow(c,2))- pow(b,2)), 0.5);
    if (m1+m2<m3||m2+m3<m1||m3+m1<m2){
        std::cout<< "We cant make a triangle with such sides"<<std::endl; // проверяем полученные медианы из которых будем строить фигуру на правило построения треугольника
        return 0;}
    double m1new,m2new,m3new;
    m1new= pow((2*(pow(m1,2)+ pow(m2,2))- pow(m3,2)), 0.5); // ищем медианы для треугольника составленного из медиан прошлого
    m2new= pow((2*(pow(m2,2)+ pow(m3,2))- pow(m1,2)), 0.5);
    m3new= pow((2*(pow(m1,2)+ pow(m3,2))- pow(m2,2)), 0.5);
    std::cout << "m1 is equal " << m1new << "; m2 is " << m2new  << "; m3 is " << m3new <<std::endl;
    return 0;
}
