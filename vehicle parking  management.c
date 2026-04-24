#include <stdio.h>

int bike = 0, car = 0, bus = 0;
int total = 0;

int main() {
    int choice;

    while (1) {
        printf("\n--- Vehicle Parking Management System ---\n");
        printf("1. Park Bike\n");
        printf("2. Park Car\n");
        printf("3. Park Bus\n");
        printf("4. Show Total Vehicles\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                bike++;
                total++;
                printf("Bike parked successfully.\n");
                break;

            case 2:
                car++;
                total++;
                printf("Car parked successfully.\n");
                break;

            case 3:
                bus++;
                total++;
                printf("Bus parked successfully.\n");
                break;

            case 4:
                printf("\nParked Vehicles:\n");
                printf("Bikes: %d\n", bike);
                printf("Cars : %d\n", car);
                printf("Buses: %d\n", bus);
                printf("Total: %d\n", total);
                break;

            case 5:
                printf("Thank you! Exiting program.\n");
                return 0;

            default:
                printf("Invalid choice. Try again.\n");
        }
    }
}