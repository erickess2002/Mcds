#include "Aluno.hpp"
#include <iostream>

        
        /// Setters

        void Aluno::setCurso(std::string c){ this->curso = c; }

        void Aluno::setMatricula(int m){ this->matricula = m; }

        /// Getters

        std::string Aluno::getCurso(std::string){ return this->curso; }

        int Aluno::getMatricula(int){ return this->matricula; }

        void Aluno::print(){

            Pessoa::print();

            std::cout << "Curso: " << this->curso << std::endl << "Matricula: " << this->matricula;



        }
