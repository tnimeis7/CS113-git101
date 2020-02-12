// Pointer

#include <stdio.h>
#include <stdlib.h>

int addTen(int *numbers, int n) {
  for (int i=0 ; i<n ; i++) {
    printf("main [%p] = %d\n",numbers+i, *(numbers+i)) ;
    *(numbers+i)+=10 ;
  }
  return 1 ;
}

void addTwenty(int *n){
  *n+=20 ;
}

int main(){
  int numbers[] = {4,5,6,7,8} ;
  int n = 5 ;
  addTen(numbers,n); //ส่งด้วยaddressรับด้วยpointer
  for (int i = 0 ; i<n ; i++) {
    printf("main [%p] = %d\n",numbers+i, *(numbers+i)) ;
  }
  addTwenty(&n);
  printf("n=%d\n",n);
}