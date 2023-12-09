#pragma once

#include "notifier.hpp"

#include <iostream>
#include <ostream>
#include <string>

// TODO: declarar EmailDecorator


namespace notify {

    class EmailDecorator : public NotifierDecorator{

        public:
            EmailDecorator(Notifier *note) : NotifierDecorator(note) {}

        void send(const std::string &message, std::ostream &saida) const override {

            //NotifierDecorator::send(message + "por email: ", saida);

            //std::cout << &notifier << "email" << std::endl;

            notifier->send("por email: " + message);

        }

        ~EmailDecorator() override {delete notifier;};

    };

}