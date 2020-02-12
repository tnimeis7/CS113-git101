//Types, Operators and Expressions

#include <stdio.h>

int main(){
  puts("- in front of the canteen -") ;
  int aint = 20 ;
  float bFloat = 0.25 ;
  long long z_long = 3000002000 ;
  char name7 = 'A' ;
  printf("hey! %c%c, you have to pay me %lld Bath.\n",name7 , name7+13 ,z_long) ;
  printf("Oh no! I have %d Bath.\n",aint) ;
  puts("Are you kidding me?") ;
  printf("You want more %.2f Bath?\n\n",bFloat*2) ;
    
  puts("- in the classroom -") ;
  double piBoy = 3.14159265359 ;
  printf("hi dude, What is %lf.\n",piBoy) ;
  printf("It is Pi.\n") ;
  puts("oh! price of corn pie!? very cheepy!!.") ;
  printf("what!?\'-\'\\ \n\n") ;

  puts("- I want to know.. -") ;
  printf("sizeof(int)         = %d Byte\n",sizeof(aint)) ;
  printf("sizeof(float)       = %d Byte\n",sizeof(bFloat)) ;
  printf("sizeof(long long)   = %d Byte\n",sizeof(z_long)) ;
  printf("sizeof(char)        = %d Byte\n",sizeof(name7)) ;
  printf("sizeof(double)      = %d Byte\n\n",sizeof(piBoy)) ;

  puts("teacher : Today we will study about..") ;
  printf("0B is binary \n0 is octal \nand\n0X is hexadecimal\n") ;
  printf("IF you want to print octal use \'%co\' and print hexa is \'%cx\' or \'%cX\'.\n\n",'%','%','%') ;

}