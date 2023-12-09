#include <iostream>
#include <string>
#include "notifier.hpp"
#include "email.hpp"
#include "sms.hpp"


int main(){



    notify::Notifier *notifier = new notify::CustomNotifier();
    notifier = new notify::EmailDecorator(notifier);
    notifier = new notify::SMSDecorator(notifier);
    notifier->send("mensagem de teste");




    return 0;
}