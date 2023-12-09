#pragma once

#include "notifier.hpp"

#include <iostream>
#include <ostream>
#include <string>

// TODO: declarar EmailDecorator


namespace notify {

    class EmailDecorator : public NotifierDecorator{

        public:
            EmailDecorator(Notifier* note) : NotifierDecorator(note) {}

        void send(const std::string &message, std::ostream &saida) const override {

            NotifierDecorator::send(message, saida);


        }

    };

}