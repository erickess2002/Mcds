#include <iostream>
#include "TEMPO.hpp"

int main(){

    Tempo t1;
    Tempo t2 (12, 12, 12);
    Tempo t3 (24, 0 , 0);
    Tempo t4 (23, 60, 60);

    t1.getTempo();
    t2.getTempo();
    t3.getTempo();
    t4.getTempo();

    t1.setTempo(22, 10, 22);
    t1.getTempo();


return 0;


}