#pragma once

#include "notifier.hpp"

#include <iostream>
#include <ostream>
#include <string>

// TODO: declarar SMSDecorator

namespace notify {

    class SMSDecorator : public NotifierDecorator{

        public:
            SMSDecorator(Notifier *note) : NotifierDecorator(note) {}

            void send(const std::string &message, std::ostream &saida) const override{

                //saida << "por SMS: ";

            saida << "Enviando notificação por SMS: " << message << std::endl;

            //NotifierDecorator::send(message, saida);

                //std::cout << &notifier << "sms" << std::endl;

                //notifier->send("por SMS: "+ message, saida);

        }

        //~SMSDecorator() override {delete notifier;};

    };
    
    
}