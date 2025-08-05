#include <stdio.h>

typedef struct {
    float length;
    float width;
    float area;
} Rectangle;

Rectangle input();
float calculate_area(Rectangle rect);
void compare_areas(Rectangle r1, Rectangle r2);
void output(Rectangle r1, Rectangle r2);

Rectangle input() {
    Rectangle rect;
    printf("Enter length: ");
    scanf("%f", rect.length);
    printf("Enter width: ");
    scanf("%f", rect.width);
    rect.area = calculate_area(rect);
}

float calculate_area(Rectangle rect) {
    return rect.length * rect.width;
}

void compare_areas(Rectangle r1, Rectangle r2) {
    if (r1.area > r2.area) {
        printf("Rectangle 1 has a larger area.\n");
    } else if (r1.area < r2.area) {
        printf("Rectangle 2 has a larger area.\n");
    } else {
        printf("Both rectangles have the same area.\n");
    }
}

void output(Rectangle r1, Rectangle r2) {
    printf("\nRectangle 1: Length = %.2f, Width = %.2f, Area = %.2f\n",
    r1.length, r1.width, r1.area);
    printf("Rectangle 2: Length = %.2f, Width = %.2f, Area = %.2f\n", r2.length,
    r2.width, r2.area);
    compare_areas(r1, r2);
}

int main() {
    printf("Enter details for Rectangle 1:\n");
    Rectangle rect1 = input();
    printf("\nEnter details for Rectangle 2:\n");
    Rectangle rect2 = input();
    output(rect1, rect2);
    return 0;
}
