#include <stdio.h>

typedef struct {
    float length;
    float width;
    float area;
    float cost_per_sq_unit;
    float total_cost;
} Rectangle;

Rectangle input();
Rectangle calculate_area(Rectangle rect);
Rectangle calculate_total_cost(Rectangle rect);
void output(Rectangle rect);

int main() {
    Rectangle rect;
    rect = input();
    rect = calculate_area(rect);
    rect = calculate_total_cost(rect);
    output(rect);
    return 0;
}

Rectangle input() {
    Rectangle rect;

    printf("Enter the length of the floor: ");
    scanf("%f", &rect.length);

    printf("Enter the width of the floor: ");
    scanf("%f", &rect.width);

    printf("Enter the cost per square unit: ");
    scanf("%f", &rect.cost_per_sq_unit);

    return rect;
}

Rectangle calculate_area(Rectangle rect) {
    rect.area = rect.length * rect.width;
    return rect;
}

Rectangle calculate_total_cost(Rectangle rect) {
    rect.total_cost = rect.area * rect.cost_per_sq_unit;
    return rect;
}

void output(Rectangle rect) {
    printf("\n--- Floor Tiling Summary ---\n");
    printf("Length: %.2f units\n", rect.length);
    printf("Width: %.2f units\n", rect.width);
    printf("Area: %.2f square units\n", rect.area);
    printf("Cost per square unit: %.2f\n", rect.cost_per_sq_unit);
    printf("Total tiling cost: %.2f\n", rect.total_cost);
}
