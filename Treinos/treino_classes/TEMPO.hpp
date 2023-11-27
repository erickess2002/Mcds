#ifndef TEMPO_HPP
#define TEMPO_HPP

////// definindo metodos, construtor e destrutor da classe

class Tempo {

    private:

        int hora; int minuto; int segundo; /// atributos da classe

    public:

    Tempo();

    Tempo(int, int, int);

    void setTempo(int, int, int);

    void getTempo();


};


#endif



