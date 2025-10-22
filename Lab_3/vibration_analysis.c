#include <stdio.h>

int main() {
    float amplitude, frequency;

    printf("Enter vibration amplitude (mm): ");
    scanf("%f", &amplitude);

    printf("Enter vibration frequency (Hz): ");
    scanf("%f", &frequency);

    if (amplitude > 0.5 && (frequency >= 20 && frequency <= 50)) {
        printf("\nRisk Level: HIGH RISK \n");
    } 
    else if (amplitude > 0.5 || frequency > 60) {
        printf("\nRisk Level: MEDIUM RISK \n");
    } 
    else {
        printf("\nRisk Level: LOW RISK \n");
    }

    return 0;
}