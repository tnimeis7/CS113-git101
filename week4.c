//Function , Pass by value

#include <stdio.h>
#include <stdlib.h>

int fibo(int value) ;

int even(int value) {
  if (value%2) {
    return 0;
  }
  else {
    return 1;
  }
}

int main(){
  int value ;
  printf("value (before set the value) is %d\n",value) ;
  value = 12 ;
  printf("value (after set the value) is %d\n",value) ;
  int y = even(value) ;
  if (y) {
    printf("%d is even.",value) ;
  }
  else {
    printf("%d is odd.",value) ;
  }
  printf("\nand fibonacci of 0-%d is...",value) ;
  for (int i=0 ; i<=value ; i++) {
    printf("\n%-2d = %d",i,fibo(i)) ;
  }
}

int fibo(int n) {
  if (n==1) {
    return 1 ;
  }
  else if (n==0) {
    return 0 ;
  }
  else {
    return fibo(n-1) + fibo(n-2) ;
  }
}