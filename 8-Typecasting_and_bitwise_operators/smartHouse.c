#include <stdio.h>

void switchLight(unsigned char *state, int room) {
    *state ^= (1 << (room - 1)); 
}

void printState(unsigned char state) {
  size_t bitCount = sizeof(state) * 8;
  for (char i = bitCount - 1; i>=0; i--) {
    printf("Light %d - %u\n", i + 1, (state >> i) & 1);
  }
}

int main() {
    unsigned char state = 0;  
    int choice, room;

    while (1) {
        printf("Menu:\n");
        printf("1. Switch lights\n");
        printf("2. Print state\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter room number (1-8): ");
                scanf("%d", &room);
                if (room < 1 || room > 8) {
                    printf("Invalid room number! Please enter a number between 1 and 8.\n");
                } else {
                    switchLight(&state, room);
                }
                break;

            case 2:
                printState(state);
                break;

            case 3:
                printf("Exiting program.\n");
                return 0;

            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    }

    return 0;
}

