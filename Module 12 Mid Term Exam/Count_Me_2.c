#include <stdio.h>
#include <string.h>

int main() {
  char str[100001];
  scanf("%s", str);
  int str_length = strlen(str);
  int consonant_count = 0;
  for (int i = 0; i < str_length; i++) {
    if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' &&
        str[i] != 'u') {
      consonant_count++;
    }
  }
  printf("%d", consonant_count);
  return 0;
}