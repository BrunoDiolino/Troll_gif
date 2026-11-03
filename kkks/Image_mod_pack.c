#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void Exvid() {
  HINSTANCE r = ShellExecuteA(NULL, "open", "Takemi_saborosa.gif", NULL, NULL,
                              SW_SHOWNORMAL);
  if ((INT_PTR)r <= 32)
    printf("falhou ao abrir o gif (codigo %d)\n", (int)(INT_PTR)r);
}
int main(void) {
  printf("pega essa zueira de leve kkkkkkkkk\n");
  Exvid();

  return 0;
}
