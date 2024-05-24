#include <stdio.h>
#include <stdlib.h>

int main(void) {
  // puts can fail, check it here
  if (puts("Hello, world!") == EOF) {
    return EXIT_FAILURE;
  }

  return EXIT_SUCCESS;
}
