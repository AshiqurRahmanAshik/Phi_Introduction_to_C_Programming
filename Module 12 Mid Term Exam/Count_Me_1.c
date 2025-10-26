
#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  int divide_by_2 = 0;
  int divide_by_3 = 0;

  for (int i = 0; i < n; i++) {
    if (arr[i] % 2 == 0) {
      divide_by_2++;
    } else if (arr[i] % 3 == 0) {
      divide_by_3++;
    } else if (arr[i] % 2 == 0 && arr[i] % 3 == 0) {
      divide_by_2++;
    }
  }
  printf("%d %d", divide_by_2, divide_by_3);

  return 0;
}