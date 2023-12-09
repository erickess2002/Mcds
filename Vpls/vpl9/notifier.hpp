#pragma once

#include <iostream>
#include <ostream>
#include <string>

namespace notify {
class Notifier {
public:
  // @param message Mensagem a ser enviada
  // @param saida Stream de saída em que a mensagem será inserida
  //              (padrão, i.e. sem especificar o segundo parâmetro, é cout)
  virtual void send (std::string const &message, std::ostream &saida = std::cout) const = 0;
  virtual ~Notifier() = default;
};

// TODO: declarar classe CustomNotifier

class CustomNotifier : public Notifier {

    public:

        void send (std::string const &message, std::ostream &saida = std::cout) const override;


};



// TODO: declarar classe NotifierDecorator

class NotifierDecorator : public Notifier {

        protected:

            Notifier* notifier;

        public:

            NotifierDecorator(Notifier* note) : notifier(note) {}

            // void send (std::string const &message, std::ostream &output = std::cout) const override;
            void send (std::string const &message, std::ostream &saida) const override {

                saida << "Enviando notificação: " << message << std::endl;

            }

    };


}