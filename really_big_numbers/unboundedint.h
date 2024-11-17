#ifndef unboundedint_h
#define unboundedint_h

#include <stdio.h>
#include <stdarg.h>
#include <stdint.h>
#include <stdlib.h>

struct UnboundedInteger {
  uint64_t *integer;
  short sign;
  int size;
  char *hex;
};

struct UnboundedInteger unbounded_integer_constructor(short sign, int size, ...);
void unbounded_integer_destructor(struct UnboundedInteger *bignum);

#endif
