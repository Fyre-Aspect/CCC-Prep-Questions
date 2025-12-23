#include <iostream>

int add(int a, int b) {
    return a + b;
}


double subtract(double h, int d){
    return h - d;
}



int main() {
    std::cout << "Codeacademy Rocks!" << std::endl;

    int a = 20;
    int b = 30;

    int c;
    std::cout << "Enter a number for c: ";
    std::cin >> c; 

    double steroids = 0.5622;
    double d = steroids * 10;
    double h = (c * d) + a - b;

    std::cout << "a + b: " << add(a, b) << std::endl;

    std::cout << "Value of d: " << d << std::endl;

    std ::cout << "Value of h: " << h << std::endl; 

    std::cout << "h - d: " << subtract(h, d) << std::endl;
}



