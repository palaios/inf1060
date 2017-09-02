#include <stdio.h>
#include <stdbool.h>

int main(int msg, char *argv[]) {
  int i;
  int value;
  int n;
  char ch;
  
  if( msg == 2 ) {
        printf("Input: %s\n", argv[1]);
    
    for (i=1; i<msg; i++) {
      n = sscanf(argv[i], "%d%c", &value, &ch);
      if (n != 1) {
	/* sscanf didnt find a number to convert, so it wasnt a number*/
	printf("not a number\n");
      }
      else {
	int x = value;

	printf("Input was number: %i \n", x);
	/* It was a number*/
	
      }
    }
  }
  else if( msg < 2 ) {
    printf("Forventer 1 argument, eks ./oppgave1 argument\n");
  }
}
