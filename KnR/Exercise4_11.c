#include <stdio.h>
#include <stdlib.h>  // for atof()

#define MAXOP 100    // maximum size of operand or operator
#define NUMBER '0'   // signal that a number was found

int getop(char []);
void push(double);
double pop(void);

int main() {
    int type;
    double op2;
    char s[MAXOP];

    while ((type = getop(s)) != EOF) {
        switch (type) {
            case NUMBER:
                push(atof(s));
                break;
            case '+':
                push(pop() + pop());
                break;
            case '*':
                push(pop() * pop());
                break;
            case '-':
                op2 = pop();
                push(pop() - op2);
                break;
            case '/':
                op2 = pop();
                if (op2 != 0.0)
                    push(pop() / op2);
                else
                    printf("error: zero divisor\n");
                break;
            case '\n':
                printf("\t%.8g\n", pop());
                break;
            default:
                printf("error: unknown command %s\n", s);
                break;
        }
    }
    return 0;
}

#define MAXVAL 100  // maximum depth of val stack

int sp = 0;         // next free stack position
double val[MAXVAL]; // value stack

// push: push f onto value stack
void push(double f) {
    if (sp < MAXVAL)
        val[sp++] = f;
    else
        printf("error: stack full, can't push %g\n", f);
}

// pop: pop and return top value from stack
double pop(void) {
    if (sp > 0)
        return val[--sp];
    else {
        printf("error: stack empty\n");
        return 0.0;
    }
}

#include <ctype.h>

int getch(void);
void ungetch(int);

// getop: get next character or numeric operand
#define NUMBER '0'

int getop(char s[]) {
    static int buf = EOF;  // Internal buffer for storing extra characters
    int i, c;

    if (buf == EOF || buf == ' ' || buf == '\t')
        while ((s[0] = c = getchar()) == ' ' || c == '\t')
            ;
    else {
        s[0] = c = buf;
        buf = EOF;
    }

    s[1] = '\0';

    if (!isdigit(c) && c != '.' && c != '-')
        return c;  // Not a number

    if (c == '-') {
        int next = getchar();
        if (!isdigit(next) && next != '.') {
            buf = next;
            return c; // Negative sign
        }
        s[1] = c = next;
        i = 1;
    } else {
        i = 0;
    }

    if (isdigit(c))  // Collect integer part
        while (isdigit(s[++i] = c = getchar()))
            ;
    
    if (c == '.')  // Collect fraction part
        while (isdigit(s[++i] = c = getchar()))
            ;

    s[i] = '\0';

    if (c != EOF)
        buf = c;
    
    return NUMBER;
}
  

#define BUFSIZE 100

char buf[BUFSIZE];  // buffer for ungetch
int bufp = 0;       // next free position in buf

int getch(void) {
    return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c) {
    if (bufp >= BUFSIZE)
        printf("ungetch: too many characters\n");
    else
        buf[bufp++] = c;
}
