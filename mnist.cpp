#include "mnist.hpp"


namespace eosio {
void mnist::apply(account_name contract, account_name act) {
  switch (act) {
    case N(parse): {
      break;
    }
    case N(example): {
      print("EOS pred: ", predict(testImg));
      break;
    }
  }
}

}  // namespace eosio

extern "C" {
[[noreturn]] void apply(uint64_t receiver, uint64_t code, uint64_t action) {
  eosio::mnist ct(receiver);
  ct.apply(code, action);
  eosio_exit(0);
}
}