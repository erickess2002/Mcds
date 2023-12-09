#pragma once

#include "notifier.hpp"

#include <iostream>
#include <ostream>
#include <string>

// TODO: declarar SMSDecorator

namespace notify {

    class SMSDecorator : public NotifierDecorator{

        public:
            SMSDecorator(Notifier* note) : NotifierDecorator(note) {}

        void send(const std::string message, std::ostream &saida = std::cout);

    };
    
}