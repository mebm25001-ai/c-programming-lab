#include <stdio.h>
int main() {
    float temperature;
    
    printf("Enter the machine temperature (in °C): ");
    scanf("%f", &temperature);
    
    if (temperature < 0) {
        printf("machine not started  (%.2f °C)\n", temperature);
    } else if (temperature >= 0 && temperature < 60) {
        printf("The machine is operating within the normal temperature range. (%.2f °C)\n", temperature);
    } else if (temperature > 60 && temperature <= 80) {
        printf("Caution: The machine is getting warm. (%.2f °C)\n", temperature);
    } else {
        printf("Warning:(%.2f °C)\n", temperature);
    }
    
    
    
    return 0;
}