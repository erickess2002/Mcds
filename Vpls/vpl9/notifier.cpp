#include "notifier.hpp"

#include <iostream>
#include <ostream>
#include <string>


namespace notify {

void CustomNotifier::send (std::string const &message, std::ostream &saida) const {

            saida << "Enviando notificação " << message << std::endl;

        }

//  void NotifierDecorator::send (std::string const &message, std::ostream &saida) {

//                 if(notifier)
//                     notifier -> send(message);

//             }





}