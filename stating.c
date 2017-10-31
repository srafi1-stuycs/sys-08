#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <unistd.h>
#include <time.h>

void disp_stat(char* filename) {
    struct stat finfo;
    stat(filename, &finfo);
    printf("size: %d\n", (int) finfo.st_size);
    printf("permissions: %d\n", (int) finfo.st_mode);
    printf("last access: %s\n", ctime(&(finfo.st_atime)));
}

int main() {
    disp_stat("foo");
    return 0;
}
