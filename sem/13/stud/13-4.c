#include <signal.h>
#include <stdio.h>

void my_handler(int nsig){
   printf("Receive signal %d, CTRL-C pressed\n");
}

int main(void){

    (void)signal(SIGINT, my_handler);
    while(1);
    return 0;

}