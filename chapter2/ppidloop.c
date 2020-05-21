#include<sys/types.h>
#include<unistd.h>

int main(void){
    //親プロセスのプロセスIDを受け取る関数
    for(;;) getppid();
}