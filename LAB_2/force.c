#include <stdio.h>

int main() {
    float mass, acceleration, force;

    printf("Enter the mass (in kg): ");
    scanf("%f", &mass);

    printf("Enter the acceleration (in m/s^2): ");
    scanf("%f", &acceleration);

    force = mass * acceleration;

    printf("\nForce = %f N (Newtons)\n", force);

    return 0;
}