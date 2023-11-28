#include "Circle.hpp"
#include "iostream"
#define PI 3.141592


    /// Construtores
    Circle::Circle(){

        radius = 1;
        x = 0;
        y = 0;

    }


    Circle::Circle(float r, int x1, int y1){

        if(r < 0){

            std::cout << "Raio negativo nao sera aceito, setado para valor padrao 1." << std::endl;

            radius = 1;
        
        }else
            radius = r;

        x = x1;
        y = y1;


    }

        /// Metodos
    float Circle::area(){

        return PI*(radius*radius);

    }

    float Circle::diameter(){

        return 2*radius;

    }

    void Circle::setRadius(float r){

        if(r < 0){

            std::cout << "Raio negativo nao sera aceito, setado para valor padrao 1." << std::endl;

            radius = 1;
        
        }else
            radius = r;


    }

    void Circle::setOrigin(int x1, int y1){

        x = x1;
        y = y1;

    }

    float Circle::getRadius(){

        std::cout << "O raio do circulo e: " << radius << std::endl;

        return radius;

    }

    void Circle::getOrigin(){

        std::cout << "Coordenada X: " << x << ", Coordenada Y: " << y << std::endl;


    }