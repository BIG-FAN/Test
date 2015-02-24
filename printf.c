#include <stdio.h>

int main(void){

  char note[] = "hello";
  char *ptr = note;
  
  printf("test %s",note)
  
  ptr = ptr++;
  *ptr = *ptr ^ 0x20;
  
  printf("\n\n%s",note);

  return 0;
}
