#include <stdio.h>
#include <string.h>

int main() {
    char b[3];
    
    printf("Enter your blood group: ");
    scanf("%2s", b);
    
    if (strcmp(b, "A+") == 0) {
        printf("You can receive A+, A-, O+, O-\n");
    } else if (strcmp(b, "O+") == 0) {
        printf("You can receive O+, O-\n");
    } else if (strcmp(b, "B+") == 0) {
        printf("You can receive B+, B-, O+, O-\n");
    } else if (strcmp(b, "AB+") == 0) {
        printf("You can receive all blood groups\n");
    } else if (strcmp(b, "A-") == 0) {
        printf("You can receive A-, O-\n");
    } else if (strcmp(b, "O-") == 0) {
        printf("You can receive O-\n");
    } else if (strcmp(b, "B-") == 0) {
        printf("You can receive B-, O-\n");
    } else if (strcmp(b, "AB-") == 0) {
        printf("You can receive B-, A-, AB-, O-\n");
    } else {
        printf("Invalid blood group\n");
    }
    
    return 0;
}
