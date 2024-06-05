#include <stdio.h>

void one(void);
void two(void);
void three(void);
void one_three(void);

int main(void) {
  printf("starting now:\n");
  one_three();
  printf("done!\n");
  return 0;
}

void one_three(void) {
  one();
  printf("\n");
  two();
  printf("\n");
  three();
  printf("\n");
}

void one(void) { printf("one"); }
void two(void) { printf("two"); }
void three(void) { printf("three"); }
