#include <stdio.h>
#include <unistd.h> // For sleep function

void usingForLoop();
void usingWhileLoop();
void usingDoWhileLoop();

int main() {
    printf("Smart Traffic Light Simulation\n");

    usingForLoop();
    usingWhileLoop();
    usingDoWhileLoop();

    return 0;
}

void usingForLoop() {
    printf("\nUsing For Loop:\n");
    const char *lights[] = {"Red", "Yellow", "Green"};
    for (int i = 0; i < 3; i++) {
        printf("Light: %s\n", lights[i]);
        sleep(1); // Simulate time delay
    }
}

void usingWhileLoop() {
    printf("\nUsing While Loop:\n");
    const char *lights[] = {"Red", "Yellow", "Green"};
    int i = 0;
    while (i < 3) {
        printf("Light: %s\n", lights[i]);
        sleep(1); // Simulate time delay
        i++;
    }
}

void usingDoWhileLoop() {
    printf("\nUsing Do-While Loop:\n");
    const char *lights[] = {"Red", "Yellow", "Green"};
    int i = 0;
    do {
        printf("Light: %s\n", lights[i]);
        sleep(1); // Simulate time delay
        i++;
    } while (i < 3);
}
