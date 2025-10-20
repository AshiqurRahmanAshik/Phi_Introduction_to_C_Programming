#include <stdio.h>

int main() {
  char s[50];
  fgets(s, 21, stdin);
  printf("%s", s);
  return 0;
}