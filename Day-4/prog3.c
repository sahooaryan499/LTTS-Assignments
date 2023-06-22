/*Write a program using structures to calculate the difference between two time periods using a user-defined function.*/
#include <stdio.h>

typedef struct {
    int hrs;
    int min;
    int sec;
} TimePeriod;

TimePeriod calculateTimeDifference(TimePeriod start, TimePeriod end) {
    TimePeriod diff;

    int startsec = start.hrs * 3600 + start.min * 60 + start.sec;
    int endsec = end.hrs * 3600 + end.min * 60 + end.sec;

    int diffsec = (endsec > startsec) ? (endsec - startsec) : (startsec - endsec);

    diff.hrs = diffsec / 3600;
    diff.min = (diffsec % 3600) / 60;
    diff.sec = (diffsec % 3600) % 60;

    return diff;
}

int main() {
    TimePeriod start, end, diff;

    printf("Enter the start time (hrs min sec): ");
    scanf("%d %d %d", &start.hrs, &start.min, &start.sec);

    printf("Enter the end time (hrs min sec): ");
    scanf("%d %d %d", &end.hrs, &end.min, &end.sec);

    diff = calculateTimeDifference(start, end);

    printf("\nTime difference: %02d:%02d:%02d\n", diff.hrs, diff.min, diff.sec);

    return 0;
}

