#ifndef ALUNO_HPP
#define ALUNO_HPP

#include "Pessoa.hpp"
#include <string>

class Aluno : public Pessoa {


    private:
        std::string curso;
        int matricula;
    
    public:
        /// Construtor
        Aluno(std::string n, std::string e, double t, std::string c, int m) : Pessoa{n, e, t}, curso {c}, matricula{m} {};

        /// Setters

        void setCurso(std::string);
        void setMatricula(int);

        /// Getters

        std::string getCurso(std::string);
        int getMatricula(int);

        /// Print

        void print();

};


#endif