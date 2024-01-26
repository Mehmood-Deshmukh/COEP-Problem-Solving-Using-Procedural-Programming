// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

void swap(char *a, char *b) {
  char temp[strlen(a) + 1];
  strcpy(temp, a);
  strcpy(a, b);
  strcpy(b, temp);
}


void print_permutations(char *str, int len) {
  if (len == 1) {
    printf("%s\n", str[0]);
  } else {
    for (int i = 0; i < len; i++) {
      for (int j = i + 1; j < len; j++) {
        swap(&str[i], &str[j]);
        print_permutations(str, len - 1);
        swap(&str[i], &str[j]);
      }
    }
  }
}
int main() {
    // Write C code here
    char ch[128] = "abcde";
    int len = strlen(ch);
    print_permutations(ch, len);
    return 0;
}