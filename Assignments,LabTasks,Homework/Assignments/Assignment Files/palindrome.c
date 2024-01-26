#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <errno.h>
#include <unistd.h>

int isPalindrome(const char *str) {
    int length = strlen(str);
    if (length == 1) {
        return 1;
    }

    for (int i = 0; i < length / 2; i++) {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t') {
            return 0;
        }
        else {
            if (str[i] != str[length - i - 1]) {
                return 0;
            }
        }
        return 1;
    }
}

int main(int argc, char *argv[]) {

    int fd = open(argv[1], O_RDONLY);
    if (fd == -1) {
        perror("open failed");
        return errno;
    }

    char word[100];
    char c;
    int i = 0;

    while ((read(fd, &c, 1)) > 0) {
        if (c == ' ' || c == '\n' || c == '\t') {
            word[i] = '\0';
            if (isPalindrome(word)) {
                printf("%s\n", word);
            }
            i = 0;
        }
        else {
            word[i++] = c;
        }
    }

    if (i > 0 && isPalindrome(word)) {
        printf("%s\n", word);
    }

    close(fd);
    return 0;
}
