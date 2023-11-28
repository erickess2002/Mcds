#include "TEMPO.hpp"
#include <iostream>

Tempo::Tempo(){

    hora = 0;
    minuto = 0;
    segundo = 0;

}

Tempo::Tempo(int hh, int mm, int ss){

    if(hh >= 0 && hh <= 23)
        hora = hh;
    else{

        std::cout << "Formato de hora invalido!!!" << std::endl;

        hora = 0;

    }

    if(mm >= 0 && ss >= 0 && mm <= 59 && ss <= 59){

        minuto = mm;
        segundo = ss;

    }else{

        std::cout << "Formato de hora invalido!!!" << std::endl;

        minuto = 0;
        segundo = 0;

    }

}

void Tempo::setTempo(int hh, int mm, int ss){

    if(hh >= 0 && hh <= 23)
        hora = hh;
    else{

        std::cout << "Formato de hora invalido!!!" << std::endl;

        hora = 0;

    }

    if(mm >= 0 && ss >= 0 && mm <= 59 && ss <= 59){

        minuto = mm;
        segundo = ss;

    }else{

        std::cout << "Formato de hora invalido!!!" << std::endl;

        minuto = 0;
        segundo = 0;

    }


}

void Tempo::getTempo(){

    std::cout << "{" << hora << ":" << minuto << ":" << segundo << "}" << std::endl;

}
