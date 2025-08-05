#include <stdio.h>

void inputMarks(int n, float marks[n]);
float computeAverage(int n, float marks[n]);
void output(float avg);

int main() {
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    float marks[n];

    inputMarks(n, marks);

    float avg = computeAverage(n, marks);

    output(avg);

    return 0;
}

void inputMarks(int n, float marks[n]) {
    for (int i = 0; i < n; i++) {
        printf("Enter marks for student %d: ", i + 1);
        scanf("%f", &marks[i]);
    }
}

float computeAverage(int n, float marks[n]) {
    float sum = 0;

    for (int i = 0; i < n; i++) {
        sum += marks[i];
    }

    return sum / n;
}

void output(float avg) {
    printf("The average marks = %.2f\n", avg);
}
