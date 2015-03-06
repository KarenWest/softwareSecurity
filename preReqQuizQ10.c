#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define N 5
#define M 5

void main() {
  int **blah2 = malloc(sizeof(int*)*N);
  int *special = NULL;
  int i, j;
  for(i = 0; i < N; i++) {
    int *tmp = (int *)malloc(sizeof(int)*M);
    memset((void *)tmp, 0, sizeof(int)*M);

    if(i > N) {
      special = &tmp[3];
    }

    blah2[i] = tmp;
  }

  if(special != NULL) {
    *special = 7;
  }

  for(i = 0; i < N; i++) {
    for(j = 0; j < M; j++) {
      printf("%d ", blah2[i][j]);
    }
    printf("\n");
  }
}
