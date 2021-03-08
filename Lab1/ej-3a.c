#include <stdio.h>
#include <sys/syscall.h>

int main() {
  int x;
  x = syscall(345, 15);

  prinf("%d\n", x);

  return 0;
}
