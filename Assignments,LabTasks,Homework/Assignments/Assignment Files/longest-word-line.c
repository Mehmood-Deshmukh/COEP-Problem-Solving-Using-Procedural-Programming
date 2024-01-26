#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define LINE_SIZE 256
#define WORD_SIZE 128

int max_word_length(char *line){
    int len = strlen(line);
    char ch;

    int max = 0;
    char *word = malloc(WORD_SIZE * sizeof(char));
    int WordIndex = 0;

    for (int i = 0; i <= len; i++){
        ch = line[i];
        if (ch == ' ' || ch == '\n' || ch == '\0'){
            word[WordIndex] = '\0';

            if (strlen(word) > max)
                max = strlen(word);
            WordIndex = 0;
        }
        else
            word[WordIndex++] = ch;
    }
    
    free(word);
    return max;
}


int main(int argc, char *argv[]){

    char *line = malloc(LINE_SIZE * sizeof(char));
    char *RequiredLine = NULL;
    int line_index = 0;

    int wlen;
    int max = 0;

    int file = open(argv[1], O_RDONLY);
    if (file == -1){
        perror("Open Failed");
        return errno;
    }

    char ch;
    while (read(file, &ch, 1) > 0){
        if (ch == '\n'){

            line[line_index] = '\0';
            line_index = 0;
            wlen = max_word_length(line);

            if (wlen > max){
                max = wlen;
                free(RequiredLine);
                RequiredLine = line;
                line = malloc(LINE_SIZE * sizeof(char));
            }
        }
        else if (ch != '\n'){
            line[line_index++] = ch;
        }
    }
    printf("%s\n", RequiredLine);
    close(file);
    free(line);
    free(RequiredLine);
}

