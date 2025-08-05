#include <stdio.h>

void input(float *fixed_charge, int *num_calls, float *cost_per_call) {
    printf("Enter the fixed monthly charge: ");
    scanf("%f", fixed_charge);
    printf("Enter the number of calls made: "); 
    scanf("%d", num_calls);
    printf("Enter the cost per call: ");
    scanf("%f", cost_per_call);
}

float calculate_bill(float fixed_charge, int num_calls, float cost_per_call) {
    return fixed_charge + (num_calls * cost_per_call);
}

void output(float total_bill) {
    printf("\nTotal Monthly Bill: ₹%.2f\n", total_bill);
}

int main() {
    float fixed_charge, cost_per_call, total_bill; int num_calls;
    input(&fixed_charge, &num_calls, &cost_per_call);
    total_bill = calculate_bill(fixed_charge, num_calls, cost_per_call);
    output(total_bill);

    return 0;
}
