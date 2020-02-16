//6210406777 Isreeya Nathong

#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node *next ;
};

struct node *first=NULL, *last=NULL ;

void prrint() {
  struct node *tua ;
  for (tua=first;tua;tua=tua->next) {
    printf("%d\n",tua->data) ;
  }
}

void create(int insert) { 
  struct node *newdata=(struct node*)malloc(sizeof(struct node));  
  newdata->data=insert ;  
  newdata->next=NULL ;  
  if(first==NULL) {  
    last=newdata ; 
    first=newdata ;  
  }  
  else { 
    last->next=newdata ;  
    last=newdata ; 
    }  
} 

void sort() {  
  struct node *focus_on=first, *idx ;  
  int sortdata;       
  if(first==NULL) {  
    return;  
  }  
  else {  //selection sort
    while(focus_on!=NULL) {  
      idx=focus_on->next ;              
      while(idx!=NULL) {  
        if((focus_on->data)>(idx->data)) {  
          sortdata=focus_on->data ;  
          focus_on->data=idx->data ;  
          idx->data=sortdata ;  
        } 
        idx=idx->next;  
      }  
      focus_on=focus_on->next ;  
    }      
  }  
}  

int main() {
  int insert ;
  while (scanf("%d",&insert)==1) {
    if (insert<=-1) {
      break ;
    }
    create(insert) ;
    sort() ;
  }
  prrint() ;
}