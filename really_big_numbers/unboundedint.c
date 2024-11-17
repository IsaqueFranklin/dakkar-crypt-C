#include "unboundedint.h"
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <stdint.h>

struct UnboundedInteger unbounded_integer_constructor(short sign, int size, ...) {
  struct UnboundedInteger number;
  number.integer = malloc(sizeof(uint64_t[size]));
  va_list blocks;
  va_start(blocks, size);

  for (int i = 0; i < size; i++) {
    number.integer[i] = va_arg(blocks, uint64_t);
  }

  number.sign = sign;
  number.size = size;
  number.hex = malloc(size * 8);

  for (int i = 0; i < size; i++) {
    char x[17];
    sprintf(x, "%llX", number.integer[i]);
    strcat(number.hex, x);
  }
  return number;
}
void unbounded_integer_destructor(struct UnboundedInteger *bignum) {
  free(bignum->integer);
  free(bignum->hex);
}

