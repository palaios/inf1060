#include <stdio.h>

int addition(int x, int y){
  int sum;
  sum = x+y;
  return sum;
}

int main(){
  int a = 0;
  int b = 5;
  printf("sum: %i", addition(a,b));
}

