#include <eosiolib/eosio.hpp>
#include <eosiolib/print.hpp>
#include <eosiolib/types.hpp>
#include "nn.cpp"

namespace eosio {
class mnist : public eosio::contract {
 private:
  account_name _contract;

 public:
  mnist(account_name self) : _contract(self), eosio::contract(self) {}
  void apply(account_name contract, account_name act);

  /// @abi action
  void example();
};

}  // namespace eosio
