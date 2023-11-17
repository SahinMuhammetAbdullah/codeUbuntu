#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void drd1() {
  fork();
  fork();
  printf("Hello\n");
  return;
}
void drd2() {
  if (fork() == 0) {
    fork();
    printf("Hello\n");
    exit(0);
  }
  return;
}
void drd3() {
  if (fork() == 0) {
    fork();
    printf("Hello\n");
    return;
  }
  return;
}
int main() {
  drd3();
  printf("Hello\n");
  exit(0);
  return 0;
}
