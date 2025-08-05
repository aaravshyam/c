#include <stdio.h>

typedef struct {
    float length;
    float width;
    float area;
} Rectangle;

void input(int n, Rectangle rects[n]);
void calculateArea(int n, Rectangle rects[n]);
void output(int n, Rectangle rects[n]);

int main() {
    int n;

    printf("Enter the number of rectangles: ");
    scanf("%d", &n);

    Rectangle rects[n];

    input(n, rects);
    calculateArea(n, rects);
    output(n, rects);

    return 0;
}

void input(int n, Rectangle rects[n]) {
    for (int i = 0; i < n; i++) {
        printf("Enter length and width for rectangle %d:\n", i + 1);
        printf("Length: ");
        scanf("%f", &rects[i].length);
        printf("Width: ");
        scanf("%f", &rects[i].width);
    }
}

void calculateArea(int n, Rectangle rects[n]) {
    for (int i = 0; i < n; i++) {
        rects[i].area = rects[i].length * rects[i].width;
    }
}

void output(int n, Rectangle rects[n]) {
    printf("Rectangle Areas:\n");
    for (int i = 0; i < n; i++) {
        printf("Rectangle %d: Area = %.2f\n", i + 1, rects[i].area);
    }
}
