//write a program to check the user need to input tensile strength of a two materials (in Mpa)
#include <stdio.h>
int main() {
    float tensile_strength1, tensile_strength2;
    
    printf("Enter the tensile strength of material 1 (in Mpa): ");
    scanf("%f", &tensile_strength1);
    
    printf("Enter the tensile strength of material 2 (in Mpa): ");
    scanf("%f", &tensile_strength2);
    
    if (tensile_strength1 > tensile_strength2) {
        printf("Material 1 has a higher tensile strength (%.2f Mpa) than Material 2 (%.2f Mpa).\n", tensile_strength1, tensile_strength2);
    } else if (tensile_strength1 < tensile_strength2) {
        printf("Material 2 has a higher tensile strength (%.2f Mpa) than Material 1 (%.2f Mpa).\n", tensile_strength2, tensile_strength1);
    } else {
        printf("Both materials have the same tensile strength (%.2f Mpa).\n", tensile_strength1);
    }
    
    return 0;
}