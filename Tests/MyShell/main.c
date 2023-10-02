#include "main.h"

int main(int ac, char **argv){
  char *prompt = "(MyShell) # ";
  char *lineptr= NULL, *lineptr_copy = NULL;
  size_t n = 0;
  ssize_t nchars_read;
  const char *delim = " \n"
  
  /*Declaring void variables*/
  (void)ac; (void)argv;
  while (1){
    printf("%s", prompt);
    nchars_read =  getline(&lineptr, &n, stdin);
    /*Check if the getline function failed/ reached/ User pressed Ctrl + D*/
    if (nchars_read == -1){
      
      return(-1);
    }
    
    printf("%s\n", lineptr);
  
  }
  
  /*Free up allocated memory*/
  free(lineptr);
  

  return (0);
  
}
