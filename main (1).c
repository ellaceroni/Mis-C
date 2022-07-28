#include <stdio.h>

int convert(int n) {
  int rem, multiple = 1;
  int bin = 0;
  while (n != 0) {
    rem = n % 2;
    bin += multiple * rem;
    n /= 2;
    multiple *= 10;

  } 
  return bin; 
}

int main() {
  printf("Enter an integer number. ");
  int n, result;
  scanf("%d", &n);
  result = convert(n);
  printf("%d in binary is %d.", n, result);
  

  return 0;
}