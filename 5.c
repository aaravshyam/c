#include <stdio.h>

void inputTemperatures(int n, float temps[n]);
float findHighest(int n, float temps[n]);
float findLowest(int n, float temps[n]);
void output(float max, float min);

int main() {
    int n = 7;
    float temps[7];
    float maxTemp, minTemp;

    inputTemperatures(n, temps);
    maxTemp = findHighest(n, temps);
    minTemp = findLowest(n, temps);
    output(maxTemp, minTemp);

    return 0;
}

void inputTemperatures(int n, float temps[n]) {
    printf("Enter temperatures for 7 days:\n");

    for (int i = 0; i < n; i++) {
        printf("Day %d: ", i + 1);
        scanf("%f", &temps[i]);
    }
}

float findHighest(int n, float temps[n]) {
    float max = temps[0];

    for (int i = 1; i < n; i++) {
        if (temps[i] > max) {
            max = temps[i];
        }
    }

    return max;
}

float findLowest(int n, float temps[n]) {
    float min = temps[0];

    for (int i = 1; i < n; i++) {
        if (temps[i] < min) {
            min = temps[i];
        }
    }

    return min;
}

void output(float max, float min) {
    printf("\nHighest temperature of the week: %.2f°C\n", max);
    printf("Lowest temperature of the week: %.2f°C\n", min);
}
