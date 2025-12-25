#include "kernel/types.h"
#include "user/user.h"

int main(int argc, char *argv[]) {
  if(argc != 2) {
    printf("Usage: test_scheduler <tickets>\n");
    exit(1);
  }
  
  int tickets = atoi(argv[1]);

  if(settickets(tickets) < 0) {
    printf("Failed to set tickets\n");
    exit(1);
  }
  
  printf("Process with %d tickets started\n", tickets);
  

  while(1) {
  }
  
  exit(0);
}
