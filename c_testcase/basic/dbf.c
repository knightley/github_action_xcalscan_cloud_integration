#include <stdio.h>
#include <stdlib.h>

// stx 20200529 02
int func_1(void *p) {
  if (p != NULL) {
    free(p);   /* free p */
  }
}

int main() {
  int i, *p, *q;
  p = malloc(10 * sizeof(int));
  if (p == NULL)
    return 1;
  for (i=0; i < 10; ++i)
    p[i] = i;
  q = p;
  func_1(p);  /* free p the first time */
  return 0;
}

