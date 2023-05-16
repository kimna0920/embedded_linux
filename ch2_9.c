#include <stdlib.h>
#include <stdio.h>
#include <dirent.h>

int main(){
    DIR *dp;
    struct dirent *dent;
    long loc;

    dp = opendir(".");

    printf("Start Position : %ld\n", telldir(dp));
    while((dent = readdir(dp))){
        printf("Read : %s -> ",dent->d_name);
        printf("Cur Psition : %ld\n", telldir(dp));
    }

    printf("**Directory Position Rewind **\n");
    readdir(dp);
    loc = telldir(dp);
    seekdir(dp,loc);
    printf("Cur Psition : %ld\n", telldir(dp));

    dent = readdir(dp);
    printf("Read : %s\n", dent->d_name);

    closedir(dp);
    
}
