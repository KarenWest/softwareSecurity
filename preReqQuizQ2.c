 #include <stdio.h>
 #include <stdlib.h>
  int main(int argc, char *argv[]) {
    unsigned int i;
    unsigned int k = atoi(argv[1]);
    char     *buf = malloc(k); /* 1 */

    if(buf == 0) {
      return -1;
    }

    for(i = 0; i < k; i++) {
      buf[i] = argv[2][i]; /* 2 */
    }

    printf("%s\n", buf); /* 3 */

    return -1;
  }
