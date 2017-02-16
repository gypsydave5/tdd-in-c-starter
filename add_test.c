#include "add.h"
#include <assert.h>
#include <stdio.h>

void testExample() { assert(1); }
void testAdd() {
  int result = add(5, 2);
  assert(result == 7);
}

int main() {
  testExample();
  testAdd();
  printf("\t\x1b[32mAdd tests pass\x1b[0m\n");
  return 0;
}
