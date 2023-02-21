#include "main.h"

#include <stdio.h>

void putformat(int n) {
  if (n < 10) {
    printf("  %d", n);
  } else if (n < 100) {
    printf(" %d", n);
  } else {
    printf("%d", n);
  }
}

void print_times_table(int n) {
  if (n < 0 || n > 100) {
    return; // Do not print anything if n is outside the valid range
  }
  for (int i = 0; i <= n; i++) {
    for (int j = 0; j <= n; j++) {
      putformat(i * j);
      if (j < n) {
        printf(", ");
      }
    }
    printf("\n");
  }
}

