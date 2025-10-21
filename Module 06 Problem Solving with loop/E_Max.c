#include <stdio.h>

int main() {
  int n, x, m = 0;
  scanf("%d", &n);
  for (int i = 0; i <= n; i++) {
    scanf("%d", &x);
    if (m < x) {
      m = x;
    }
  }
  printf("%d", m);
  return 0;
}