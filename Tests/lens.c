#include <stdio.h>
#include <string.h>

int main(){
  int len1;
  char string1[] = "Hello Everybody!";
  len1 = strlen(string1);
  printf("Length of string1 is: %d\n", len1);
      int len2;
    char string2[] = {'T','R','A','I','N','\0'};
    len2 = strlen(string2);
    printf("Length of string2 is: %d\n", len2);
}
