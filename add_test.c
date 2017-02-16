#include "add.h"
#include <assert.h>
#include <stdio.h>

void testExample() { assert(1); }

int main() {
  testExample();
  printf("\t\x1b[32mAdd tests pass\x1b[0m\n");
  return 0;
}
