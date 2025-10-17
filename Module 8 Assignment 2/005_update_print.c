#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  int x_index, x_value;
  scanf("%d %d", &x_index, &x_value);
  for (int i = n - 1; i >= 0; i--) {
    arr[x_index] = x_value;
    printf("%d ", arr[i]);
  }
  return 0;
}