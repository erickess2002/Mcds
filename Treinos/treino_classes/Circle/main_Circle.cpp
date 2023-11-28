#include <iostream>
#include "Circle.hpp"

int main(){

    Circle c1;
    Circle c2 (2, 1, 1);
    Circle c3 (-2, -1, -1);

    float area1 = c1.area();
    float diametro1 = c1.diameter();
    c1.setOrigin(2, 2);
    c1.setRadius(2);
    c1.getRadius();
    c1.getOrigin();

    std::cout << "Area Circulo 1: " << area1 << std::endl << "Diametro Circulo 1: " << diametro1 << std::endl;

    area1 = c1.area();
    diametro1 = c1.diameter();

    std::cout << "Area Circulo 1: " << area1 << std::endl << "Diametro Circulo 1: " << diametro1 << std::endl;







return 0;

}