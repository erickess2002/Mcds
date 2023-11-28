#include <iostream>
#include "Complex.hpp"

int main(){

    Complex n1 (3,3);
    Complex n2 (2,2);
    Complex n3, n4;

    n1.print();
    n2.print();

    n3 = n1+n2;
    std::cin >> n4;

    std::cout << n3;
    std::cout << n4;



    // Complex n3, n4, n5, n6;
    // n4 = n1-n2;
    // n5 = n1*n2;
    // n6 = n1/n2;

    // n3.print();
    // n4.print();
    // n5.print();
    // n6.print();


return 0;

}