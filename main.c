#include <stdio.h>

int checkPrime(int n) {
  int test, x = 2;
  if (n == 0 || n == 1)
    test = 0;

  else {
    for (x; x <= n / 2; ++x) {
      if (n % x == 0) {
        test = 0;
        break;
      }
      else {
        test = 1;
      } 
    }
      
  return test;
  }
}

int main(void) {
  int possibleSum, y, flag = 0;
  printf("Enter a number. ");
  scanf("%d", &possibleSum);

  for (y = 2; y <= possibleSum / 2; ++y) {
    if (checkPrime(y) == 1) {
       if (checkPrime(possibleSum - y) == 1) {
         printf("%d = %d + %d \n", possibleSum, y, possibleSum - y);
        flag = 1;
       }  
    }  
  }

  if (flag == 0) {
   printf("%d cannot be written as a sum of prime numbers.", possibleSum); 
  }
    

  
    
    
  
  return 0;
}