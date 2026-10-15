#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    if (fork() == 0) {
        for (int i = 1; i <= 5; i++) {
            printf("%d\n", i);
            sleep(1);
        }
    } else {
        wait(NULL);
        for (int i = 6; i <= 10; i++) {
            printf("%d\n", i);
        }
    }
    return 0;
}