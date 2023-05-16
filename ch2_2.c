#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(){
    if(rmdir("han")==-1){
        perror("에러상황 : ");
        exit(-1);
    }
    printf("han디렉토리가 잘 지워졌데요오.\n");
}
