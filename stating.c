#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <unistd.h>

void disp_stat(char* filename) {
    struct stat finfo;
    stat(filename, &finfo);
    printf("%d\n", (int) finfo.st_size);
    printf("%d\n", (int) finfo.st_mode);
    printf("%d\n", (int) finfo.st_atime);
}

int main() {
    int fd;
    open(fd, O_WRONLY | O_CREAT, 0644);
    disp_stat("foo");
    return 0;
}
