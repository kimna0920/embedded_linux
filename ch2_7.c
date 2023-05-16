#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(){
    char *cwd;
    int fd;

    cwd = getcwd(NULL, BUFSIZ);
    printf("1.디렉터리가 이동했데요오: %s\n",cwd);

    fd = open("bit", O_RDONLY);
    fchdir(fd);

    cwd = getcwd(NULL, BUFSIZ);
    printf("2.디렉터리가 이동했데요오: %s\n",cwd);

    close(fd);
    free(cwd);
}
