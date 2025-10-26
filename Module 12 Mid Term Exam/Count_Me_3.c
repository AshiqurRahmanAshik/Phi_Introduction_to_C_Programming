#include <stdio.h>
#include <string.h>

int main() {
  int tc;
  scanf("%d", &tc);
  while (tc--) {
    char str[10001];
    scanf("%s", str);
    int str_length = strlen(str);
    int capital_count = 0;
    int small_count = 0;
    int digit_count = 0;
    for (int i = 0; i < str_length; i++) {
      if (str[i] >= 'A' && str[i] <= 'Z') {
        capital_count++;
      } else if (str[i] >= 'a' && str[i] <= 'z') {
        small_count++;
      } else if (str[i] >= '0' && str[i] <= '9') {
        digit_count++;
      }
    }
    printf("%d %d %d\n", capital_count, small_count, digit_count);
  }

  return 0;
}