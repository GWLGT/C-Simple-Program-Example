#include <stdio.h>

int max(int x, int y) {
  return (x > y) ? x : y;
}

int main(void) {
  int result = max(1928, 2934);
  printf("%d\n", result);

  return 0;
}
