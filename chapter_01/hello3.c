#include <stdio.h>
#include <stdlib.h>

int main(void) {
  // printf allows to format the outout text
  if (printf("%s\n", "Hello, world!") == EOF) {
    return EXIT_FAILURE;
  }

  return EXIT_SUCCESS;
}
