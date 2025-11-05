/*
  NAME;MORRIS KATHURIMA
REG NO; CT100/G/26260/25


#include <stdio.h>
#include <stdlib.h>

void writeInputFile();
void processFile();
void displayFiles();

int main() {
    writeInputFile();
    processFile();
    displayFiles();
    return 0;
}

void writeInputFile() {
    FILE *fp;
    int num, i;

    fp = fopen("input.txt", "w");
    if (fp == NULL) {
        printf("Error opening input.txt for writing!\n");
        exit(1);
    }

    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &num);
        fprintf(fp, "%d\n", num);
    }
fclose(fp);
    printf("Data successfully written to input.txt\n\n");
}

void processFile() {
    FILE *fpIn, *fpOut;
    int num, sum = 0, count = 0;
    float avg;

    fpIn = fopen("input.txt", "r");
    if (fpIn == NULL) {
        printf("Error opening input.txt for reading!\n");
        exit(1);
    }

    while (fscanf(fpIn, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(fpIn);

    if (count == 0) {
        printf("No data found in input.txt!\n");
        exit(1);
    }

    avg = (float)sum / count;

    fpOut = fopen("output.txt", "w");
    if (fpOut == NULL) {
        printf("Error opening output.txt for writing!\n");
        exit(1);
    }

    fprintf(fpOut, "Sum = %d\nAverage = %.2f\n", sum, avg);
    fclose(fpOut);

    printf("Results written to output.txt\n\n");
}
void displayFiles() {
    FILE *fp;
    char ch;

    printf("---- Contents of input.txt ----\n");
    fp = fopen("input.txt", "r");
    if (fp == NULL) {
        printf("Error opening input.txt!\n");
        exit(1);
    }
    while ((ch = fgetc(fp)) != EOF)
        putchar(ch);
    fclose(fp);

    printf("\n---- Contents of output.txt ----\n");
    fp = fopen("output.txt", "r");
    if (fp == NULL) {
        printf("Error opening output.txt!\n");
        exit(1);
    }
    while ((ch = fgetc(fp)) != EOF)
        putchar(ch);
    fclose(fp);
printf("\n");
}
