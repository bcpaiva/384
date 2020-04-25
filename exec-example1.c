#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

main() {

pid_t  pid;
int status;
 
pid = fork();
if (pid != 0) { // parent code
  printf("########## I am THE parent!!!!!!!!!!!!!!!\n");
}
else {
     static char *argv[]={"ls","-a",NULL};
     execvp("ls", argv);
     }

} // main

