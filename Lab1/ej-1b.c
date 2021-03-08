#include <stdio.h>
#include <unistd.h>

int main() {
  int f;
  f = fork();

  if(f == 0)
  {
    execl("main", (char*)NULL);
  } else {
    prinf("Numero de proceso: %\n", (int)getpid());
    execl("main", (char*)NULL);
  };

  return 0;
}
