#include <stdio.h>

int main() {
  int m, n, positive = 0, negative = 0, odd = 0, even = 0;
  scanf("%d", &m);
  for (int i = 1; i <= m; i++) {
    scanf("%d ", &n);

    if (n > 0) {
      positive++;
    }
    if (n < 0) {
      negative++;
    }

    if (n % 2 == 0) {
      even++;
    } else {
      odd++;
    }
  }
  printf("Even: %d\n", even);
  printf("Odd: %d\n", odd);
  printf("Positive: %d\n", positive);
  printf("Negative: %d\n", negative);

  return 0;
}