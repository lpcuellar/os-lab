#include <stdio.h>
#include <unistd.h>

int main() {
  printf("HOLA MUNDO!\n");
  printf("%d\n", (int)getpid());

  return 0;
}
