#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main() {
  pid_t pid;
  pid = fork();
  //fork child process
  if(pid<0){
    //error occurred
    fprintf(stderr,"fork failed");
    return 1;
  }else if(pid==0){
    //child process
    //execlp("/bin/ls", "ls", NULL);   //execlp(path,name_of_command,argument);
    printf("Hello Adarsh \n");
    fflush(stdout);
    execlp("/bin/date", "date", NULL);
    printf("Hello again Adarsh"); /// this will not printed because after execlp all line where overwritten
  }else{
    //parent process
    //parent will wait for the child to completed
    wait(NULL);
    printf("child completed");
  }
  return 0;

}