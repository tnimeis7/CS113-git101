// Control flow

#include <stdio.h>
#include <stdlib.h>

int main(){
  puts("-If-Else-") ;
  puts("Where I should to go") ;
  puts("Your money is..") ;
  char inputn[8] ;
  fgets(inputn , 8 , stdin) ;
  int n = atoi(inputn) ;
  if (n) {
    if (n>0) {
      printf("Let's go ") ;
      if (n>=100 && n<1000) {
        printf("to restaurants.") ;
      }
      else if (n>=1000 && n<10000) {
        printf("to Shopping mall.") ;
      }
      else if (n>=10000 && n<100000) {
        printf("to travel in your country.") ;
      }
      else if (n>=100000) {
        printf("to where you want to go.\n") ;
        printf("GO!!!!") ;
      }
      else {
        printf("to 7-11.") ;
      }
    }
    else {
      printf("You must to go to work friend....") ;
    }
  }
  else {
    printf("go to sleep.") ;
  }

  printf("\n\n") ;
  puts("-Switch-") ;
  puts("type A or E or I or O or U") ;
  printf("And then...") ;
  char m = getchar() ;
  switch (m) {
  case 'A' :
    printf("Eat Mama") ;
    break ;
  case 'E' :
    printf("Working harder") ;
    break ;
  case 'I' :
    printf("Exercise") ;
    break ;
  case 'O' :
    printf("Play the game") ;
    break ;
  case 'U' :
    printf("Read a book") ;
    break ;
  default:
    printf("(I told you TYPE A E I O U)\n") ;
    printf("You got ROBBED!!") ;
  }
  printf("\n-END-\n\n") ;

  puts("-Loop-") ;
  puts("Number of star that you want to print (DON'T>10)") ;
  puts("let's print the star") ;
  int num ;
  scanf("%d",&num) ;
  while (1) {
    if (num<=0) {
      break ;
    }
    else if (num>10) {
      goto k;
    }
    for (int i = 1 ; i<=num ; i++) {
      printf("star*-* ") ;
    }
    k:
    printf("\n") ;
    printf("if you want stop TYPE 0 or negative number\n") ;
    scanf("\n%d",&num) ;
  }
}