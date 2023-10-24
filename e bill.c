#include <stdio.h>

int main() {
    int consumerNo, prevReading, currReading;
    char consumerName[50], connectionType[10];
    float totalUnits, billAmount;

    // Input consumer details
    printf("Enter consumer number: ");
    scanf("%d", &consumerNo);
    printf("Enter consumer name: ");
    scanf("%s", consumerName);
    printf("Enter previous month reading: ");
    scanf("%d", &prevReading);
    printf("Enter current month reading: ");
    scanf("%d", &currReading);
    printf("Enter connection type (domestic/commercial): ");
    scanf("%s", connectionType);

    // Calculate total units consumed
    totalUnits = currReading - prevReading;

    // Calculate bill amount based on connection type and units consumed
    if (strcmp(connectionType, "domestic") == 0) {
        if (totalUnits <= 100)
            billAmount = totalUnits * 1;
        else if (totalUnits <= 200)
            billAmount = 100 + ((totalUnits - 100) * 2.50);
        else if (totalUnits <= 500)
            billAmount = 100 + 100 * 2.50 + ((totalUnits - 200) * 4);
        else
            billAmount = 100 + 100 * 2.50 + 300 * 4 + ((totalUnits - 500) * 6);
    } else if (strcmp(connectionType, "commercial") == 0) {
        if (totalUnits <= 100)
            billAmount = totalUnits * 2;
        else if (totalUnits <= 200)
            billAmount = 100 + ((totalUnits - 100) * 4.50);
        else if (totalUnits <= 500)
            billAmount = 100 + 100 * 4.50 + ((totalUnits - 200) * 6);
        else
            billAmount = 100 + 100 * 4.50 + 300 * 6 + ((totalUnits - 500) * 7);
    } else {
        printf("Invalid connection type entered.\n");
        return 1;
    }

    // Display the electricity bill
    printf("\nElectricity Bill\n");
    printf("Consumer Number: %d\n", consumerNo);
    printf("Consumer Name: %s\n", consumerName);
    printf("Previous Month Reading: %d\n", prevReading);
    printf("Current Month Reading: %d\n", currReading);
    printf("Total Units Consumed: %.2f\n", totalUnits);
    printf("Connection Type: %s\n", connectionType);
    printf("Bill Amount: Rs. %.2f\n", billAmount);

    return 0;
}
