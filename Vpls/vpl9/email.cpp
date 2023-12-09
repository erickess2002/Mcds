#include "email.hpp"
#include "notifier.hpp"

#include <iostream>
#include <ostream>
#include <string>
namespace notify {

    void EmailDecorator::send(const std::string message, std::ostream &saida) {
        
            //saida << "Enviando notificação por email: " << message << std::endl;

            if (notifier)
                notifier->send(message, saida);

    }

}