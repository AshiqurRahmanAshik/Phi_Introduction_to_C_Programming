
#include <stdio.h>

int main() {
  int tc;
  scanf("%d", &tc);
  while (tc--) {
    int farmers, new_farmers, days, required_fewer_days;
    scanf("%d", &farmers);
    scanf("%d", &new_farmers);
    scanf("%d", &days);
    required_fewer_days = (days - (days * farmers) / (farmers + new_farmers));
    printf("%d\n", required_fewer_days);
  }
  return 0;
}