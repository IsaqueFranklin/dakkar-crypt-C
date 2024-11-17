// 
// Really big number in C for cryptography
// 17/11/2024
//
#include "unboundedint.h"
#include <stdio.h>

int main() {
  struct UnboundedInteger x = unbounded_integer_constructor(0, 4, 0x446F627742067, 0x6F20757020746865, 0x72652E2E2E104974, 0x2773286461726B2E);
  
  printf("%s\n", x.hex);
}
