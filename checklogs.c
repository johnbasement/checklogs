#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* This little program, when installed suid root, allows regular users 
   to request directory listings for directories under /var/log where 
   normal users do not have access.
*/

#define BUFFER_SIZE 2000

int main (int argc, char **argv)
{ int  i;
  char command[2000];

  /* check the number of command-line parameters */
  if (argc != 2)
  { printf("\n\nERROR: this program takes only 1 argument: the path under /var/log you want to list.\n\n");
    return 1;
  }

  /* build the system command to execute */
  strcpy(command, "ls -l /var/log/");
  strncat(command, argv[1], BUFFER_SIZE-strlen(command)-1);

  /* execute the command */
  system(command);

  return 0;
} 


