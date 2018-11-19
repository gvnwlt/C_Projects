#include <stdio.h> 
#include "test.h"

int main() 
{
  char* string = "hello world\0"; 

  print_string(string); 

  return 0;
}
