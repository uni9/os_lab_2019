#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main(void){
  char c_seed[12], c_array_size[12]; // (+-) + (2,147,483,647) + (\0)

  printf("Enter seed: ");
  scanf("%s", c_seed);
  while(fgetc(stdin) != '\n');

  printf("Enter array_size: ");
  scanf("%s", c_array_size);
  while(fgetc(stdin) != '\n');

  pid_t child_pid = fork();
  if (child_pid >= 0) {
    if (child_pid == 0) {
        execl("sequential_min_max"," ",c_seed,c_array_size,NULL);
        return 0;
    }
  } else {
    printf("Fork failed!\n");
    return 1;
  }

  wait(0);
  return 0;
}
