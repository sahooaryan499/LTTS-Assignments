/*Write an application to view the log stored in data.csv
Example, say you have the following data in data.csv

------------------------------------

EntryNo,sensorNo,Temperature,Humidity,Light,

1,S1,36.5,100,50,10:30:50
2,S3,30,100,50,10:30:55
3,S2,-6.6,100,10,10:31:00
------------------------------------

a. Write a function to extract each line in the .csv file and store it in an array of structures. 

b. Also implement functions to display the contents of the array of structures.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ENTRIES 100

struct LogEntry {
    int entryNo;
    char sensorNo[3];
    float temperature;
    int humidity;
    int light;
    char timestamp[9];
};

struct LogEntry logEntries[MAX_ENTRIES];
int numEntries = 0;

void extractLogEntries(const char* filename) {
    FILE* file = fopen(filename, "r");
    if (file == NULL) {
        printf("Failed to open the file: %s\n", filename);
        return;
    }

    char line[100];
    fgets(line, sizeof(line), file); // Ignore the header line

    while (fgets(line, sizeof(line), file) != NULL) {
        char* token = strtok(line, ",");
        logEntries[numEntries].entryNo = atoi(token);

        token = strtok(NULL, ",");
        strcpy(logEntries[numEntries].sensorNo, token);

        token = strtok(NULL, ",");
        logEntries[numEntries].temperature = atof(token);

        token = strtok(NULL, ",");
        logEntries[numEntries].humidity = atoi(token);

        token = strtok(NULL, ",");
        logEntries[numEntries].light = atoi(token);

        token = strtok(NULL, ",");
        strcpy(logEntries[numEntries].timestamp, token);

        numEntries++;
    }

    fclose(file);
}

void displayLogEntries() {
    printf("Log Entries:\n");
    printf("--------------------------------------------------\n");
    printf("EntryNo\tSensorNo\tTemperature\tHumidity\tLight\tTimestamp\n");
    printf("--------------------------------------------------\n");

    for (int i = 0; i < numEntries; i++) {
        struct LogEntry entry = logEntries[i];
        printf("%d\t%s\t%.1f\t\t%d\t\t%d\t%s\n", entry.entryNo, entry.sensorNo, entry.temperature, entry.humidity, entry.light, entry.timestamp);
    }

    printf("--------------------------------------------------\n");
}

int main() {
    const char* filename = "data.csv";
    extractLogEntries(filename);
    displayLogEntries();
    return 0;
}
