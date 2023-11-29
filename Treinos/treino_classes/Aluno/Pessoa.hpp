#ifndef PESSOA_HPP
#define PESSOA_HPP
#include <string>




class Pessoa{

    protected:
        std::string nome, email;
        double telefone;

    public:

    Pessoa(std::string n, std::string e, double t) : nome{n}, email{e}, telefone{t} {};

    /// Setters

    void setNome(std::string n);
    void setEmail(std::string e);
    void setTelefone(double t);

    /// Getters

    std::string getNome();
    std::string getEmail();
    int getTelefone();

    /// Print
    void print();




        







};



#endif