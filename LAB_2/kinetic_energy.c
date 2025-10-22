#include <stdio.h>

int main() {
    float mass, velocity, kinetic_energy;

    printf("Enter the mass (in kg): ");
    scanf("%f", &mass);

    printf("Enter the velocity (in m/s): ");
    scanf("%f", &velocity);

    kinetic_energy = 0.5 * mass * velocity * velocity;

    printf("\nKinetic Energy = %f Joules\n", kinetic_energy);

    return 0;
}
