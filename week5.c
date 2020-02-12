// Arrays

#include <stdio.h>
#include <stdlib.h>

void plus50(int arr[5]) {
  printf("-array1 in function plus-\n") ;
  for (int i=0;i<5;i++) {
    arr[i] = arr[i]+50 ;
    printf("%d ",arr[i]) ;
  }
  printf("\n") ;
}

void change(int arr2[][3]) {
  for (int k=0 ; k<3 ; k++) {
    arr2[k][1] = -1 ;
  }
  printf("-array2 in function change-\n") ;
  for (int i=0;i<3;i++) {
    for (int j=0;j<3;j++) {
      printf("%2d ",arr2[i][j]) ;
    }
    printf("\n") ;
  }
}

int main(){
  int i=0 , j=0 , arr[5] = {1,2,3,4,5} , arr2[][3] = {{6,7,8},{9,10,11},{12,13,14}} ;
  printf("-original array1-\n") ;
  for (i=0;i<5;i++) {
    printf("%d ",arr[i]) ;
  }
  printf("\n") ;
  plus50(arr) ;
  printf("-array1 in main-\n") ;
  for (i=0;i<5;i++) {
    printf("%d ",arr[i]) ;
  }
  printf("\n") ;
  printf("-original array2-\n") ;
  for (i=0;i<3;i++) {
    for (j=0;j<3;j++) {
      printf("%2d ",arr2[i][j]) ;
    }
    printf("\n") ;
  }
  change(arr2) ;
  printf("-array2 in main-\n") ;
  for (i=0;i<3;i++) {
    for (j=0;j<3;j++) {
      printf("%2d ",arr2[i][j]) ;
    }
    printf("\n") ;
  }
}