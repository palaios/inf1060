#include <stdio.h>

int argCheck(int msg, char **param);

int main(int argc, char *argv[]) {
  if (argc == 2) {
    int x = argCheck(argc, argv);
  } else {
    printf("arguments not correct: programName argumentOne \n");
  }
}

int argCheck(int msg, char **param) {
  int i;
  int value;
  int n;
  char ch;
  
  for(i=1; i<msg; i++) {
    n = sscanf(param[i], "%d%c", &value, &ch);
    if (n != 1) {
      printf("not a number\n");
      return 0;
    } else {
     int x = value;
     printf("input was a number: %i \n", x);
     return x;
    }
  }
}
