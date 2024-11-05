#include <stdio.h>
int main() {
    int weekdayMinutes, nightMinutes, weekendMinutes;
    float flatRate = 39.99;
    float additionalRate = 0.40;
    float taxRate = 0.0525;
    float pretaxBill, totalBill, taxes, avgMinuteCost;
    int additionalMinutes;
    printf("Enter the number of weekday minutes used: ");
    scanf("%d", &weekdayMinutes);
    printf("Enter the number of night minutes used: ");
    scanf("%d", &nightMinutes);
    printf("Enter the number of weekend minutes used: ");
    scanf("%d", &weekendMinutes);
    if (weekdayMinutes > 600) {
        additionalMinutes = weekdayMinutes - 600;
    } else {
        additionalMinutes = 0;
    }
    pretaxBill = flatRate + (additionalMinutes * additionalRate);
    taxes = pretaxBill * taxRate;
    totalBill = pretaxBill + taxes;
    avgMinuteCost = pretaxBill / (weekdayMinutes + nightMinutes + weekendMinutes);
    printf("\n--- Monthly Bill Summary ---\n");
    printf("Weekday minutes used: %d\n", weekdayMinutes);
    printf("Night minutes used: %d\n", nightMinutes);
    printf("Weekend minutes used: %d\n", weekendMinutes);
    printf("Pretax bill: $%.2f\n", pretaxBill);
    printf("Average minute cost before taxes: $%.2f\n", avgMinuteCost);
    printf("Taxes: $%.2f\n", taxes);
    printf("Total bill: $%.2f\n", totalBill);

    return 0;
}
