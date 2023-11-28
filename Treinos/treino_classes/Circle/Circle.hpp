#ifndef Circle_HPP
#define Circle_HPP

class Circle
{

    private:
        float radius;
        int x; int y;


    public:

        /// Construtores
        Circle();
        Circle(float, int, int);

        /// Metodos
        float area();
        float diameter();
        void setRadius(float);
        void setOrigin(int, int);
        float getRadius();
        void getOrigin();


};


#endif