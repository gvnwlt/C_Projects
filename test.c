#include <stdio.h>
#include "test.h"

int print_string (char* input)
{
   if (strlen(input) == 0)
   {
     return -1;
   }
   for (int i = 0; i < strlen(input); i++)
   {
      if (input[i] != '\0')
      {
         printf(input[i]); 
      }
      else 
      {
          return 0; 
      }  
   }

}


