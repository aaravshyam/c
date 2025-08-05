#include <stdio.h>

void input(float *length, float *width) {
    printf("Enter length and width of the rectangle: "); 
    scanf("%f %f", length, width);
}

float area_rectangle(float length, float width) {
    return length * width;
}

void output(float area) {
    printf("The area of the rectangle is: %.2f\n", area);
}

int main() {
    float length, width, area;
    input(&length, &width);
    area = area_rectangle(length, width);
    output(area);

    return 0;
}
