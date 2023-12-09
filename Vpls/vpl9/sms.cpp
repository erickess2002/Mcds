#include "sms.hpp"
#include "notifier.hpp"

#include <iostream>
#include <ostream>
#include <string>


namespace notify {

    void SMSDecorator::send(const std::string message, std::ostream &saida) {
        
            //saida << "Enviando notificação por SMS: " << message << std::endl;

            if (notifier)
                notifier->send(message, saida);

    }

}