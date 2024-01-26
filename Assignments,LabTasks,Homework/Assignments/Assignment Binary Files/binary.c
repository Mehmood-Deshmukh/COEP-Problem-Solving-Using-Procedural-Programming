#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

typedef struct Transaction {
    double amount;
    time_t time;
    unsigned int from_id;
    unsigned int to_id;
    char location[32];
} Transaction;

typedef struct Date {
    char *hms; // hours minutes seconds
    int year;
    int month;
    int day;
} Date;

int findLowestAmountIndex(Transaction array[], int n);
void displayDate(char *tdate);
int getMonthNumber(char *month);

int main(int argc, char *argv[]) {
    int file = open(argv[1], O_RDONLY);
    Date hdate;

    if (file == -1) {
        perror("Error Opening File :\n");
        return 1;
    }

    int n;
    read(file, &n, sizeof(int));
    Transaction array[n];

    for (int i = 0; i < n; i++)
        read(file, &array[i], sizeof(Transaction));
    
    close(file);

    int index = findLowestAmountIndex(array, n);
    char *tdate = ctime(&array[index].time);

    printf("%s ", array[index].location);
    displayDate(tdate);
}

int findLowestAmountIndex(Transaction array[], int n) {
    int lowestIndex = 0;

    for (int currentIndex = 1; currentIndex < n; currentIndex++) {
        if (array[currentIndex].amount < array[lowestIndex].amount)
            lowestIndex = currentIndex;
    }

    return lowestIndex;
}

void displayDate(char *tdate) {
    Date hdate;

    char *ptr = strtok(tdate, " ");
    ptr = strtok(NULL, " ");
    hdate.month = getMonthNumber(ptr);

    ptr = strtok(NULL, " ");
    hdate.day = atoi(ptr);

    ptr = strtok(NULL, " ");
    hdate.hms = strdup(ptr);

    ptr = strtok(NULL, " ");
    hdate.year = atoi(ptr);

    printf("%d:%d:%d %s\n", hdate.day, hdate.month, hdate.year, hdate.hms);
}

int getMonthNumber(char *month) {
    if (strcmp(month, "Jan") == 0)
        return 1;
    if (strcmp(month, "Feb") == 0)
        return 2;
    if (strcmp(month, "Mar") == 0)
        return 3;
    if (strcmp(month, "Apr") == 0)
        return 4;
    if (strcmp(month, "May") == 0)
        return 5;
    if (strcmp(month, "Jun") == 0)
        return 6;
    if (strcmp(month, "Jul") == 0)
        return 7;
    if (strcmp(month, "Aug") == 0)
        return 8;
    if (strcmp(month, "Sep") == 0)
        return 9;
    if (strcmp(month, "Oct") == 0)
        return 10;
    if (strcmp(month, "Nov") == 0)
        return 11;
    if (strcmp(month, "Dec") == 0)
        return 12;

    return -1;
}
