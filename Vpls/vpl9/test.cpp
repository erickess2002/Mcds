#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#define DOCTEST_CONFIG_SUPER_FAST_ASSERTS

#include "doctest.hpp"
#include "notifier.hpp"
#include "email.hpp"
#include "sms.hpp"

#include <sstream>
#include <string>

TEST_CASE("email") {
  std::string const msg = "teste";
  std::ostringstream should_be;
 
  should_be << "Enviando notificação por email: "
	        << msg
	        << std::endl;
  
    ////////////////// LEMBRAR QUE EU QUE COMENTEI AS LINHAS ABAIXO

  //notify::Notifier *notifier = new notify::CustomNotifier();
  //notifier = new notify::EmailDecorator(notifier);


  std::ostringstream os;
  //notifier->send(msg, os);

  CHECK_EQ(os.str(), should_be.str());
}
