#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include<errno.h>
#include <unistd.h>
int main(int argc, char *argv[]) {
    int fd = open(argv[1], O_RDONLY);
    if (fd == -1) {
        perror("Open Failed.");
        return errno;
    }

    int charCount = 0;
    int wordCount = 0;
    int lineCount = 0;
    int inWord = 0;
    char c;

    while (read(fd, &c, 1) > 0) {
        charCount++;

        if (c == ' ' || c == '\t' || c == '\n') {
            if (inWord) {
                wordCount++;
                inWord = 0;
            }
            if (c == '\n') {
                lineCount++;
            }
        } else {
            inWord = 1;
        }
    }
    
    if (inWord) {
        wordCount++;
    }
    

    if (charCount > 0 && c != '\n') {
        lineCount++;
        charCount++;
    }

    close(fd);

    printf("%7d %7d %7d %s\n", lineCount, wordCount, charCount, argv[1]);
    return 0;
}
