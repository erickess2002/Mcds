#include "Pessoa.hpp"
#include<iostream>

    /// Setters

    void Pessoa::setNome(std::string n){

        this->nome = n;

    }

    void Pessoa::setEmail(std::string e){

        this-> email = e;

    }

    void Pessoa::setTelefone(double t){

        this->telefone = t;

    }


    /// Getters

    std::string Pessoa::getNome(){

        return this->nome;

    }

    std::string Pessoa::getEmail(){

        return this->email;

    }

    int Pessoa::getTelefone(){


        return this->telefone;

    }


    /// Print
    void Pessoa::print(){

        std::cout.precision(12);
        std::cout << "Nome: " << this->nome << std::endl << "Email: " << this->email << std::endl << "Telefone: " << this->telefone << std::endl; 
        
    }