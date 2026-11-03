#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void Exvid() {
  char cwd[MAX_PATH];
  GetCurrentDirectoryA(MAX_PATH, cwd);
  printf("cwd: %s\n", cwd);
  printf("gif existe: %d\n",
         GetFileAttributesA("Takemi_saborosa.gif") != INVALID_FILE_ATTRIBUTES);

  int r = system("\"\"C:\\Program Files\\IrfanView\\i_view64.exe\" "
                 "\".\\Takemi_saborosa.gif\" /fs\"");

  printf("sistem %d\n", r);
}

int main(void) {
  printf("pega essa zueira de leve kkkkkkkkk\n");
  Exvid();

  return 0;
}
