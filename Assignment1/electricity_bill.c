#include <stdio.h>

int main() {
    int units;
    float bill = 0;

    printf("Enter units consumed: ");
    scanf("%d", &units);

    if (units <= 100)
        bill = units * 1.5;
    else if (units <= 200)
        bill = units * 2;
    else if (units <= 300)
        bill = units * 3;
    else
        bill = units * 5;

    printf("Electricity Bill = ₹%f\n", bill);

    return 0;
}