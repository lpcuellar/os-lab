#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]) {
  int i, j, sz;
  char *c

  c = (char *) calloc(100, sizeof(char));
  i = open(argv[1], O_RDONLY);
  j = open(argv[2], O_WRONLY | O_APPEND);

  if(i < 0)
  {
    printf("SE HA PRODUCIDO UN ERRO AL LEER EL ARCHIVO %s\n", argv[1]);
    return 1;
  } else {
    sz = read(i, c, 100);
    c[sz] = '\0';
    prinf("Texto en archivo original: \n%s", c);

    if(j < 0)
    {
      printf("SE HA PRODUCIDO UN ERRO AL ESCRIBIR EN EL ARCHIVO %s\n", argv[2]);
      return 1;
    } else {
      write(j, c, strlen(c));
      prinf("SE HA COPIADO EL TEXTO CON EXITO, REVISTA EL ARCHIVO: %s\n", argv[2]);
    };
  };

  close(i);
  close(j);

  return 0;
}
