// ricerca indici positivi con array



#include <stdio.h>
#define DIM 10

main() {
  int a[DIM], b[DIM], i, j = 0;

  for (i = 0; i < DIM; i++)
    scanf("%d", &a[i]);
  for (i = 0; i < DIM; i++)
    if (a[i] > 0) {
      b[j] = a[i];
      j++;
    }

    for ( i=0; i<j; i++ ) {
      printf("%d\n", b[i]);
    }
}